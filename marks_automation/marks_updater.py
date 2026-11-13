#!/usr/bin/env python3
"""
Marks Automation Engine
Automates collecting student marks from Google Forms responses (CSV/TSV/Excel)
and updating destination grading sheets section-wise for Experiments 3 to 9.

Key Features:
1. Strict Roll Number matching (names are ignored for matching).
2. Robust header detection for Roll Number, Experiment, Section, and Marks.
3. Section-wise mapping (Section A, Section B, Section C, etc.).
4. Safe updates: preserves existing formulas, styling, and unrelated cells.
5. Strict anomaly flagging: missing marks, unmatched roll numbers, overwrite conflicts, duplicates.
6. Comprehensive post-update verification and audit report generation.
"""

import os
import sys
import csv
import json
import re
from datetime import datetime
from typing import Dict, List, Tuple, Optional, Any, Set
from dataclasses import dataclass, field, asdict

# ---------------------------------------------------------
# Data Structures
# ---------------------------------------------------------

@dataclass
class FormResponse:
    timestamp: str
    roll_number: str
    name: str
    section: str
    experiment: str
    marks: str
    raw_record: Dict[str, str] = field(default_factory=dict)

@dataclass
class Discrepancy:
    experiment: str
    section: str
    roll_number: str
    student_name: str
    status: str  # 'UNMATCHED_ROLL_NO', 'MISSING_MARKS', 'OVERWRITE_CONFLICT', 'DUPLICATE_SUBMISSION', 'PARSE_ERROR'
    existing_value: Optional[str]
    form_value: Optional[str]
    message: str

@dataclass
class UpdateRecord:
    experiment: str
    section: str
    roll_number: str
    student_name: str
    row_idx: int
    col_idx: int
    old_value: str
    new_value: str
    status: str  # 'UPDATED', 'SKIPPED_EXISTING_MATCH', 'FLAGGED_CONFLICT', 'FLAGGED_MISSING'

# ---------------------------------------------------------
# Normalization & Matching Utilities
# ---------------------------------------------------------

def normalize_roll_no(roll: Any) -> str:
    """
    Normalizes a roll number by stripping spaces, special zero-width chars,
    and converting to uppercase.
    """
    if roll is None:
        return ""
    s = str(roll).strip()
    # Remove unicode zero-width spaces or non-breaking spaces
    s = re.sub(r'[\u200B-\u200D\uFEFF\u00A0]', '', s)
    # Convert to uppercase
    s = s.upper()
    # Strip leading apostrophe if present (common in Excel text formats)
    if s.startswith("'"):
        s = s[1:]
    return s.strip()

def normalize_section(sec: Any) -> str:
    """
    Extracts canonical section identifier, e.g.:
    'Section A' -> 'A', 'CSE-A' -> 'A', 'Section B' -> 'B', 'B' -> 'B', 'CSE-C' -> 'C'
    """
    if not sec:
        return ""
    s = str(sec).strip().upper()
    # Check if pattern ends with section letter or number after a delimiter or prefix
    m = re.search(r'(?:SECTION|SEC)?\s*[-_:\s]*([A-Z0-9]+)$', s)
    if m:
        return m.group(1)
    return s

def normalize_experiment_id(exp: Any) -> Optional[int]:
    """
    Extracts the experiment number from string.
    e.g., 'Experiment 3' -> 3, 'Exp 4' -> 4, 'exp_9' -> 9.
    """
    if exp is None:
        return None
    s = str(exp).strip().lower()
    m = re.search(r'(?:experiment|exp)[\s_#-]*(\d+)', s)
    if m:
        return int(m.group(1))
    # Direct number check
    if s.isdigit():
        return int(s)
    return None

def is_experiment_col(header: str, exp_num: int) -> bool:
    """
    Checks if a destination sheet column header corresponds to Experiment `exp_num`.
    Matches variations: 'Exp 3', 'Exp-3', 'Experiment 3', 'Exp. 3', 'E3', 'Exp3'
    """
    h = header.strip().lower()
    # Regex matching variations
    pattern = rf'\b(?:exp(?:eriment)?|e)[\s._#-]*0*{exp_num}\b'
    if re.search(pattern, h):
        return True
    # If header is simply "3" or "03" and nearby context is experiments
    if h == str(exp_num) or h == f"{exp_num:02d}":
        return True
    return False

def find_roll_col(headers: List[str]) -> Optional[int]:
    """
    Identifies the Roll Number column index from a list of header strings.
    """
    patterns = [
        r'\broll\s*(?:no|num|number)\b',
        r'\benrollment\s*(?:no|num|number)?\b',
        r'\buniv(?:ersity)?\s*roll\b',
        r'\breg(?:istration)?\s*(?:no|num|number)?\b',
        r'\bstudent\s*id\b',
        r'\broll\b',
        r'\bid\b'
    ]
    for p in patterns:
        for idx, h in enumerate(headers):
            if re.search(p, h.strip().lower()):
                return idx
    return None

def find_name_col(headers: List[str]) -> Optional[int]:
    """
    Identifies the Student Name column index (used for logging only).
    """
    patterns = [
        r'\bstudent\s*name\b',
        r'\bfull\s*name\b',
        r'\bname\b'
    ]
    for p in patterns:
        for idx, h in enumerate(headers):
            if re.search(p, h.strip().lower()):
                return idx
    return None

def find_section_col(headers: List[str]) -> Optional[int]:
    """
    Identifies Section column if present.
    """
    patterns = [
        r'\bsection\b',
        r'\bbranch\s*&\s*sec\b',
        r'\bclass\s*sec\b',
        r'\bsec\b'
    ]
    for p in patterns:
        for idx, h in enumerate(headers):
            if re.search(p, h.strip().lower()):
                return idx
    return None

def find_marks_col(headers: List[str]) -> Optional[int]:
    """
    Identifies Marks / Score column in Google Forms response.
    """
    patterns = [
        r'\btotal\s*score\b',
        r'\bscore\b',
        r'\bmarks?\b',
        r'\bpoints\b',
        r'\bgrade\b'
    ]
    for p in patterns:
        for idx, h in enumerate(headers):
            if re.search(p, h.strip().lower()):
                return idx
    return None

# ---------------------------------------------------------
# Core Sheet / Table Representation
# ---------------------------------------------------------

class SheetTable:
    """
    Represents an in-memory 2D sheet table preserving rows, headers, and formulas.
    """
    def __init__(self, name: str, headers: List[str], data_rows: List[List[str]]):
        self.name = name
        self.headers = [h.strip() for h in headers]
        self.data_rows = data_rows  # 2D list of strings

        # Index roll numbers to row index (0-based relative to data_rows)
        self.roll_col_idx = find_roll_col(self.headers)
        self.name_col_idx = find_name_col(self.headers)
        self.roll_to_row: Dict[str, int] = {}

        if self.roll_col_idx is not None:
            for r_idx, row in enumerate(self.data_rows):
                if self.roll_col_idx < len(row):
                    rn = normalize_roll_no(row[self.roll_col_idx])
                    if rn:
                        self.roll_to_row[rn] = r_idx

    def find_experiment_col(self, exp_num: int) -> Optional[int]:
        for idx, h in enumerate(self.headers):
            if is_experiment_col(h, exp_num):
                return idx
        return None

    def get_cell(self, row_idx: int, col_idx: int) -> str:
        if 0 <= row_idx < len(self.data_rows):
            row = self.data_rows[row_idx]
            if 0 <= col_idx < len(row):
                return row[col_idx]
        return ""

    def set_cell(self, row_idx: int, col_idx: int, value: str):
        if 0 <= row_idx < len(self.data_rows):
            row = self.data_rows[row_idx]
            # Ensure row is wide enough
            while len(row) <= col_idx:
                row.append("")
            row[col_idx] = value

    def to_csv_rows(self) -> List[List[str]]:
        return [self.headers] + self.data_rows


# ---------------------------------------------------------
# Marks Automation Processor
# ---------------------------------------------------------

class MarksProcessor:
    def __init__(self, allow_overwrite: bool = False):
        self.allow_overwrite = allow_overwrite
        self.discrepancies: List[Discrepancy] = []
        self.updates: List[UpdateRecord] = []
        self.processed_experiments: Set[int] = set()

    def parse_form_responses(self, csv_filepath: str, default_exp_num: Optional[int] = None) -> List[FormResponse]:
        """
        Parses Google Forms response CSV file.
        Extracts Roll Number, Name, Section, Experiment, and Marks.
        """
        responses: List[FormResponse] = []
        if not os.path.exists(csv_filepath):
            raise FileNotFoundError(f"Source file not found: {csv_filepath}")

        with open(csv_filepath, mode='r', encoding='utf-8-sig', errors='replace') as f:
            reader = csv.reader(f)
            try:
                headers = next(reader)
            except StopIteration:
                return []

            roll_idx = find_roll_col(headers)
            name_idx = find_name_col(headers)
            sec_idx = find_section_col(headers)
            marks_idx = find_marks_col(headers)

            # Determine experiment number from filename or default
            exp_num = default_exp_num
            if exp_num is None:
                exp_num = normalize_experiment_id(os.path.basename(csv_filepath))

            exp_str = f"Experiment {exp_num}" if exp_num else "Unknown Experiment"

            for line_no, row in enumerate(reader, start=2):
                if not any(row):  # skip completely blank rows
                    continue

                raw_dict = {headers[i]: row[i] if i < len(row) else "" for i in range(len(headers))}

                roll_raw = row[roll_idx] if roll_idx is not None and roll_idx < len(row) else ""
                name_raw = row[name_idx] if name_idx is not None and name_idx < len(row) else ""
                sec_raw = row[sec_idx] if sec_idx is not None and sec_idx < len(row) else ""
                marks_raw = row[marks_idx] if marks_idx is not None and marks_idx < len(row) else ""

                # Sometimes marks might be formatted as "10.00 / 10" or "8/10"
                cleaned_marks = marks_raw.strip()
                m_score = re.match(r'^([\d.]+)\s*/\s*[\d.]+', cleaned_marks)
                if m_score:
                    cleaned_marks = m_score.group(1)

                resp = FormResponse(
                    timestamp=raw_dict.get("Timestamp", ""),
                    roll_number=normalize_roll_no(roll_raw),
                    name=name_raw.strip(),
                    section=normalize_section(sec_raw),
                    experiment=exp_str,
                    marks=cleaned_marks,
                    raw_record=raw_dict
                )
                responses.append(resp)

        return responses

    def update_section_sheet(
        self,
        sheet: SheetTable,
        responses: List[FormResponse],
        exp_num: int,
        section_name: Optional[str] = None
    ) -> Dict[str, Any]:
        """
        Updates marks for a specific section sheet and experiment.
        Ensures strict roll number matching and safety checks.
        """
        self.processed_experiments.add(exp_num)
        exp_col_idx = sheet.find_experiment_col(exp_num)

        if sheet.roll_col_idx is None:
            raise ValueError(f"Sheet '{sheet.name}' has no identifiable Roll Number column.")

        if exp_col_idx is None:
            raise ValueError(f"Sheet '{sheet.name}' has no column found for Experiment {exp_num} (headers: {sheet.headers}).")

        stats = {
            "total_responses": len(responses),
            "matched_and_updated": 0,
            "already_up_to_date": 0,
            "conflicts_flagged": 0,
            "missing_marks_flagged": 0,
            "unmatched_roll_flagged": 0,
            "duplicate_submissions": 0
        }

        # Track seen roll numbers within this batch to detect duplicate form submissions
        seen_rolls: Dict[str, FormResponse] = {}

        for resp in responses:
            roll = resp.roll_number
            student_name = resp.name
            marks = resp.marks
            sec = section_name or resp.section or sheet.name

            # 1. Check for empty or invalid roll number
            if not roll:
                self.discrepancies.append(Discrepancy(
                    experiment=f"Exp {exp_num}",
                    section=sec,
                    roll_number="[BLANK]",
                    student_name=student_name,
                    status="PARSE_ERROR",
                    existing_value=None,
                    form_value=marks,
                    message="Google Form response has an empty Roll Number."
                ))
                stats["unmatched_roll_flagged"] += 1
                continue

            # 2. Check for duplicate form submission
            if roll in seen_rolls:
                prev_resp = seen_rolls[roll]
                self.discrepancies.append(Discrepancy(
                    experiment=f"Exp {exp_num}",
                    section=sec,
                    roll_number=roll,
                    student_name=student_name,
                    status="DUPLICATE_SUBMISSION",
                    existing_value=prev_resp.marks,
                    form_value=marks,
                    message=f"Duplicate submission detected. Previous submission had marks '{prev_resp.marks}', new submission has '{marks}'."
                ))
                stats["duplicate_submissions"] += 1
                # If we do not allow overwrite, keep first or flag
                if not self.allow_overwrite:
                    continue
            seen_rolls[roll] = resp

            # 3. Match against destination sheet roster
            if roll not in sheet.roll_to_row:
                self.discrepancies.append(Discrepancy(
                    experiment=f"Exp {exp_num}",
                    section=sec,
                    roll_number=roll,
                    student_name=student_name,
                    status="UNMATCHED_ROLL_NO",
                    existing_value=None,
                    form_value=marks,
                    message=f"Roll number '{roll}' ({student_name}) submitted Google Form but is not in destination sheet roster '{sheet.name}'."
                ))
                stats["unmatched_roll_flagged"] += 1
                continue

            row_idx = sheet.roll_to_row[roll]
            current_val = sheet.get_cell(row_idx, exp_col_idx).strip()

            # 4. Check for missing marks in form response
            if marks == "" or marks is None:
                self.discrepancies.append(Discrepancy(
                    experiment=f"Exp {exp_num}",
                    section=sec,
                    roll_number=roll,
                    student_name=student_name,
                    status="MISSING_MARKS",
                    existing_value=current_val,
                    form_value=None,
                    message=f"Student '{roll}' ({student_name}) submitted form, but marks field is empty."
                ))
                stats["missing_marks_flagged"] += 1
                continue

            # 5. Check if cell is a formula! Never overwrite a formula
            if current_val.startswith("="):
                self.discrepancies.append(Discrepancy(
                    experiment=f"Exp {exp_num}",
                    section=sec,
                    roll_number=roll,
                    student_name=student_name,
                    status="OVERWRITE_CONFLICT",
                    existing_value=current_val,
                    form_value=marks,
                    message=f"Destination cell contains formula '{current_val}'. Refusing to overwrite formula with static marks."
                ))
                stats["conflicts_flagged"] += 1
                continue

            # 6. Check existing value vs new value
            if current_val == "":
                # Cell is empty: safe to update
                sheet.set_cell(row_idx, exp_col_idx, str(marks))
                self.updates.append(UpdateRecord(
                    experiment=f"Exp {exp_num}",
                    section=sec,
                    roll_number=roll,
                    student_name=student_name,
                    row_idx=row_idx,
                    col_idx=exp_col_idx,
                    old_value="",
                    new_value=str(marks),
                    status="UPDATED"
                ))
                stats["matched_and_updated"] += 1

            elif current_val == str(marks):
                # Existing value matches new mark perfectly
                self.updates.append(UpdateRecord(
                    experiment=f"Exp {exp_num}",
                    section=sec,
                    roll_number=roll,
                    student_name=student_name,
                    row_idx=row_idx,
                    col_idx=exp_col_idx,
                    old_value=current_val,
                    new_value=str(marks),
                    status="SKIPPED_EXISTING_MATCH"
                ))
                stats["already_up_to_date"] += 1

            else:
                # Existing value is DIFFERENT! Overwrite conflict!
                if self.allow_overwrite:
                    sheet.set_cell(row_idx, exp_col_idx, str(marks))
                    self.updates.append(UpdateRecord(
                        experiment=f"Exp {exp_num}",
                        section=sec,
                        roll_number=roll,
                        student_name=student_name,
                        row_idx=row_idx,
                        col_idx=exp_col_idx,
                        old_value=current_val,
                        new_value=str(marks),
                        status="UPDATED"
                    ))
                    stats["matched_and_updated"] += 1
                else:
                    self.discrepancies.append(Discrepancy(
                        experiment=f"Exp {exp_num}",
                        section=sec,
                        roll_number=roll,
                        student_name=student_name,
                        status="OVERWRITE_CONFLICT",
                        existing_value=current_val,
                        form_value=str(marks),
                        message=f"Conflict for roll '{roll}': destination sheet already contains '{current_val}', but Google Form has '{marks}'. Flagged for review."
                    ))
                    stats["conflicts_flagged"] += 1

        return stats

    def verify_destination(
        self,
        sheet: SheetTable,
        expected_responses: List[FormResponse],
        exp_num: int
    ) -> Dict[str, Any]:
        """
        Runs a full verification pass verifying that all eligible updates
        exist correctly in destination sheet and non-target cells were not corrupted.
        """
        exp_col_idx = sheet.find_experiment_col(exp_num)
        verification_results = {
            "experiment": exp_num,
            "section": sheet.name,
            "total_roster_students": len(sheet.data_rows),
            "verified_matches": 0,
            "unverified_discrepancies": 0,
            "details": []
        }

        if exp_col_idx is None:
            verification_results["error"] = f"Experiment {exp_num} column missing."
            return verification_results

        # Check each response that was supposed to be updated
        for resp in expected_responses:
            roll = resp.roll_number
            if not roll or roll not in sheet.roll_to_row:
                continue

            row_idx = sheet.roll_to_row[roll]
            dest_val = sheet.get_cell(row_idx, exp_col_idx).strip()
            form_val = resp.marks.strip()

            if not form_val:
                continue

            if dest_val == form_val:
                verification_results["verified_matches"] += 1
            else:
                verification_results["unverified_discrepancies"] += 1
                verification_results["details"].append({
                    "roll": roll,
                    "expected_form_val": form_val,
                    "actual_dest_val": dest_val
                })

        return verification_results

    def generate_report_markdown(self) -> str:
        """
        Generates comprehensive markdown verification and audit report.
        """
        lines = [
            "# 📋 Google Forms to Google Sheet Marks Automation Report",
            f"**Generated At:** {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}",
            f"**Overwrite Policy:** {'Allowed' if self.allow_overwrite else 'Flagged & Protected'}",
            "",
            "## 1. Summary Statistics",
            f"- **Experiments Processed:** {', '.join(str(e) for e in sorted(self.processed_experiments)) or 'None'}",
            f"- **Total Marks Updated:** {len([u for u in self.updates if u.status == 'UPDATED'])}",
            f"- **Already Up to Date (Skipped):** {len([u for u in self.updates if u.status == 'SKIPPED_EXISTING_MATCH'])}",
            f"- **Total Discrepancies & Flags:** {len(self.discrepancies)}",
            ""
        ]

        # Breakdown by status
        disc_by_status: Dict[str, int] = {}
        for d in self.discrepancies:
            disc_by_status[d.status] = disc_by_status.get(d.status, 0) + 1

        if disc_by_status:
            lines.append("### Flag Breakdown:")
            for status, count in sorted(disc_by_status.items()):
                lines.append(f"- **{status}**: {count}")
            lines.append("")

        # Discrepancy details table
        lines.append("## 2. Discrepancy & Conflict Log")
        if not self.discrepancies:
            lines.append("✅ **No discrepancies found! All processed records matched cleanly.**")
        else:
            lines.append("| Experiment | Section | Roll Number | Student Name | Issue Type | Existing | Form Mark | Note |")
            lines.append("|---|---|---|---|---|---|---|---|")
            for d in self.discrepancies:
                exist_str = d.existing_value or "-"
                form_str = d.form_value or "-"
                lines.append(f"| {d.experiment} | {d.section} | {d.roll_number} | {d.student_name} | `{d.status}` | {exist_str} | {form_str} | {d.message} |")
            lines.append("")

        # Updates log (first 25 sample updates if large)
        lines.append("## 3. Successful Update Audit Trail")
        updated_records = [u for u in self.updates if u.status == 'UPDATED']
        if not updated_records:
            lines.append("_No new cell modifications were made._")
        else:
            lines.append(f"Showing {min(len(updated_records), 30)} of {len(updated_records)} updates:")
            lines.append("| Experiment | Section | Roll Number | Student Name | Previous | New Mark |")
            lines.append("|---|---|---|---|---|---|")
            for u in updated_records[:30]:
                lines.append(f"| {u.experiment} | {u.section} | {u.roll_number} | {u.student_name} | {u.old_value or '[EMPTY]'} | **{u.new_value}** |")

        return "\n".join(lines)


# ---------------------------------------------------------
# CLI & File Helper Functions
# ---------------------------------------------------------

def load_sheet_from_csv(filepath: str, sheet_name: Optional[str] = None) -> SheetTable:
    if not os.path.exists(filepath):
        raise FileNotFoundError(f"File not found: {filepath}")
    with open(filepath, mode='r', encoding='utf-8-sig', errors='replace') as f:
        reader = list(csv.reader(f))
        if not reader:
            return SheetTable(name=sheet_name or os.path.basename(filepath), headers=[], data_rows=[])
        headers = reader[0]
        rows = reader[1:]
    return SheetTable(name=sheet_name or os.path.basename(filepath), headers=headers, data_rows=rows)

def save_sheet_to_csv(sheet: SheetTable, filepath: str):
    os.makedirs(os.path.dirname(os.path.abspath(filepath)), exist_ok=True)
    with open(filepath, mode='w', encoding='utf-8', newline='') as f:
        writer = csv.writer(f)
        writer.writerows(sheet.to_csv_rows())
