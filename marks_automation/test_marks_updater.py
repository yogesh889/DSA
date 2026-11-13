#!/usr/bin/env python3
"""
Unit and Integration Tests for Marks Automation Engine
Tests all 9 task requirements and edge cases.
"""

import unittest
import os
import shutil
import tempfile
import csv
from marks_updater import (
    SheetTable,
    FormResponse,
    MarksProcessor,
    normalize_roll_no,
    normalize_section,
    normalize_experiment_id,
    is_experiment_col,
    find_roll_col,
    find_name_col,
    find_marks_col,
    load_sheet_from_csv,
    save_sheet_to_csv
)

class TestMarksAutomation(unittest.TestCase):

    def setUp(self):
        self.temp_dir = tempfile.mkdtemp()

    def tearDown(self):
        shutil.rmtree(self.temp_dir)

    def test_roll_number_normalization(self):
        self.assertEqual(normalize_roll_no(" 21cs001 "), "21CS001")
        self.assertEqual(normalize_roll_no("21CS001\u200B"), "21CS001") # zero-width space
        self.assertEqual(normalize_roll_no("'21CS001"), "21CS001") # excel leading quote
        self.assertEqual(normalize_roll_no(None), "")
        self.assertEqual(normalize_roll_no(""), "")

    def test_section_normalization(self):
        self.assertEqual(normalize_section("Section A"), "A")
        self.assertEqual(normalize_section("sec B"), "B")
        self.assertEqual(normalize_section("CSE-C"), "C")
        self.assertEqual(normalize_section("A"), "A")

    def test_experiment_column_matching(self):
        self.assertTrue(is_experiment_col("Exp 3", 3))
        self.assertTrue(is_experiment_col("Experiment 3", 3))
        self.assertTrue(is_experiment_col("Exp-4", 4))
        self.assertTrue(is_experiment_col("Exp 5", 5))
        self.assertTrue(is_experiment_col("Experiment 6", 6))
        self.assertTrue(is_experiment_col("Exp 7", 7))
        self.assertTrue(is_experiment_col("Exp 8", 8))
        self.assertTrue(is_experiment_col("Exp 9", 9))
        self.assertTrue(is_experiment_col("E9", 9))
        self.assertFalse(is_experiment_col("Exp 4", 3))
        self.assertFalse(is_experiment_col("Total", 3))
        self.assertFalse(is_experiment_col("Roll No", 3))

    def test_clean_matching_and_updating(self):
        """Tests standard happy path: marks updated section-wise matching roll numbers strictly."""
        headers = ["S.No", "Roll No", "Student Name", "Exp 3", "Exp 4", "Total"]
        rows = [
            ["1", "21CS01", "Alice Smith", "", "", "=SUM(D2:E2)"],
            ["2", "21CS02", "Bob Jones", "", "", "=SUM(D3:E3)"],
            ["3", "21CS03", "Charlie Brown", "", "", "=SUM(D4:E4)"],
        ]
        sheet = SheetTable("Section A", headers, rows)

        responses = [
            FormResponse(
                timestamp="2026-11-02 10:00:00",
                roll_number=" 21cs01 ",  # whitespace & lowercase
                name="Alice DifferentName", # name doesn't match roster! (must match by roll no)
                section="A",
                experiment="Exp 3",
                marks="9.5"
            ),
            FormResponse(
                timestamp="2026-11-02 10:05:00",
                roll_number="21CS02",
                name="Bob Jones",
                section="A",
                experiment="Exp 3",
                marks="10"
            )
        ]

        processor = MarksProcessor(allow_overwrite=False)
        stats = processor.update_section_sheet(sheet, responses, exp_num=3)

        self.assertEqual(stats["matched_and_updated"], 2)
        self.assertEqual(stats["conflicts_flagged"], 0)
        self.assertEqual(stats["unmatched_roll_flagged"], 0)

        # Check cell values
        self.assertEqual(sheet.get_cell(0, 3), "9.5") # Alice
        self.assertEqual(sheet.get_cell(1, 3), "10")  # Bob
        self.assertEqual(sheet.get_cell(2, 3), "")    # Charlie (not submitted)

        # Verify other columns and formulas are completely untouched
        self.assertEqual(sheet.get_cell(0, 1), "21CS01")
        self.assertEqual(sheet.get_cell(0, 2), "Alice Smith") # original name preserved
        self.assertEqual(sheet.get_cell(0, 4), "")            # Exp 4 untouched
        self.assertEqual(sheet.get_cell(0, 5), "=SUM(D2:E2)") # formula preserved!

        # Run verification pass
        verif = processor.verify_destination(sheet, responses, exp_num=3)
        self.assertEqual(verif["verified_matches"], 2)
        self.assertEqual(verif["unverified_discrepancies"], 0)

    def test_unmatched_roll_number_flagged(self):
        """If a student submits the form but their Roll No is not in roster, flag instead of guessing."""
        headers = ["Roll No", "Name", "Exp 3"]
        rows = [
            ["21CS01", "Alice", ""]
        ]
        sheet = SheetTable("Section A", headers, rows)

        responses = [
            FormResponse(
                timestamp="2026-11-02 10:00:00",
                roll_number="99UNKNOWN99",
                name="Stranger",
                section="A",
                experiment="Exp 3",
                marks="8.0"
            )
        ]

        processor = MarksProcessor()
        stats = processor.update_section_sheet(sheet, responses, exp_num=3)

        self.assertEqual(stats["unmatched_roll_flagged"], 1)
        self.assertEqual(stats["matched_and_updated"], 0)
        self.assertEqual(len(processor.discrepancies), 1)
        self.assertEqual(processor.discrepancies[0].status, "UNMATCHED_ROLL_NO")
        self.assertEqual(sheet.get_cell(0, 2), "") # Roster cell remained empty

    def test_missing_marks_flagged(self):
        """If form response has blank marks, flag instead of guessing."""
        headers = ["Roll No", "Name", "Exp 3"]
        rows = [
            ["21CS01", "Alice", ""]
        ]
        sheet = SheetTable("Section A", headers, rows)

        responses = [
            FormResponse(
                timestamp="2026-11-02 10:00:00",
                roll_number="21CS01",
                name="Alice",
                section="A",
                experiment="Exp 3",
                marks="" # Missing marks
            )
        ]

        processor = MarksProcessor()
        stats = processor.update_section_sheet(sheet, responses, exp_num=3)

        self.assertEqual(stats["missing_marks_flagged"], 1)
        self.assertEqual(stats["matched_and_updated"], 0)
        self.assertEqual(len(processor.discrepancies), 1)
        self.assertEqual(processor.discrepancies[0].status, "MISSING_MARKS")
        self.assertEqual(sheet.get_cell(0, 2), "")

    def test_overwrite_conflict_flagged(self):
        """If a mark already exists and differs, flag conflict instead of overwriting."""
        headers = ["Roll No", "Name", "Exp 3"]
        rows = [
            ["21CS01", "Alice", "7.0"] # Existing mark is 7.0
        ]
        sheet = SheetTable("Section A", headers, rows)

        responses = [
            FormResponse(
                timestamp="2026-11-02 10:00:00",
                roll_number="21CS01",
                name="Alice",
                section="A",
                experiment="Exp 3",
                marks="9.0" # New mark is 9.0
            )
        ]

        # Case 1: allow_overwrite=False (default safe mode)
        processor = MarksProcessor(allow_overwrite=False)
        stats = processor.update_section_sheet(sheet, responses, exp_num=3)

        self.assertEqual(stats["conflicts_flagged"], 1)
        self.assertEqual(stats["matched_and_updated"], 0)
        self.assertEqual(sheet.get_cell(0, 2), "7.0") # Preserved old value!
        self.assertEqual(processor.discrepancies[0].status, "OVERWRITE_CONFLICT")

        # Case 2: allow_overwrite=True
        processor_overwrite = MarksProcessor(allow_overwrite=True)
        stats_ow = processor_overwrite.update_section_sheet(sheet, responses, exp_num=3)
        self.assertEqual(stats_ow["matched_and_updated"], 1)
        self.assertEqual(sheet.get_cell(0, 2), "9.0") # Overwritten as explicitly requested

    def test_duplicate_submissions_flagged(self):
        """Detect and flag multiple submissions by the same student."""
        headers = ["Roll No", "Name", "Exp 3"]
        rows = [
            ["21CS01", "Alice", ""]
        ]
        sheet = SheetTable("Section A", headers, rows)

        responses = [
            FormResponse(
                timestamp="2026-11-02 10:00:00",
                roll_number="21CS01",
                name="Alice",
                section="A",
                experiment="Exp 3",
                marks="8.0"
            ),
            FormResponse(
                timestamp="2026-11-02 10:30:00",
                roll_number="21CS01",
                name="Alice",
                section="A",
                experiment="Exp 3",
                marks="9.5"
            )
        ]

        processor = MarksProcessor(allow_overwrite=False)
        stats = processor.update_section_sheet(sheet, responses, exp_num=3)

        self.assertEqual(stats["duplicate_submissions"], 1)
        self.assertEqual(stats["matched_and_updated"], 1)
        self.assertEqual(sheet.get_cell(0, 2), "8.0") # First submission kept
        self.assertTrue(any(d.status == "DUPLICATE_SUBMISSION" for d in processor.discrepancies))

    def test_multi_experiment_and_section_pipeline(self):
        """Tests processing Experiments 3 through 9 across Section A and Section B."""
        # Create Section A and Section B sheets
        headers = ["Roll No", "Name", "Exp 3", "Exp 4", "Exp 5", "Exp 6", "Exp 7", "Exp 8", "Exp 9"]
        sec_a_rows = [
            ["A01", "Alice", "", "", "", "", "", "", ""],
            ["A02", "Alex", "", "", "", "", "", "", ""]
        ]
        sec_b_rows = [
            ["B01", "Bob", "", "", "", "", "", "", ""],
            ["B02", "Bella", "", "", "", "", "", "", ""]
        ]

        sheet_a = SheetTable("Section A", headers, sec_a_rows)
        sheet_b = SheetTable("Section B", headers, sec_b_rows)

        processor = MarksProcessor()

        # Simulate responses for Experiments 3 to 9
        for exp in range(3, 10):
            resps_a = [
                FormResponse(timestamp="", roll_number="A01", name="Alice", section="A", experiment=f"Exp {exp}", marks=str(exp * 1.0)),
                FormResponse(timestamp="", roll_number="A02", name="Alex", section="A", experiment=f"Exp {exp}", marks=str(exp * 1.1))
            ]
            resps_b = [
                FormResponse(timestamp="", roll_number="B01", name="Bob", section="B", experiment=f"Exp {exp}", marks=str(exp * 0.9)),
                FormResponse(timestamp="", roll_number="B02", name="Bella", section="B", experiment=f"Exp {exp}", marks=str(exp * 1.2))
            ]
            processor.update_section_sheet(sheet_a, resps_a, exp_num=exp)
            processor.update_section_sheet(sheet_b, resps_b, exp_num=exp)

        # Verify all marks are in correct experiment columns
        for exp in range(3, 10):
            col_a = sheet_a.find_experiment_col(exp)
            self.assertEqual(sheet_a.get_cell(0, col_a), str(exp * 1.0))
            self.assertEqual(sheet_a.get_cell(1, col_a), str(exp * 1.1))

            col_b = sheet_b.find_experiment_col(exp)
            self.assertEqual(sheet_b.get_cell(0, col_b), str(exp * 0.9))
            self.assertEqual(sheet_b.get_cell(1, col_b), str(exp * 1.2))

        # Check markdown report generation
        rep = processor.generate_report_markdown()
        self.assertIn("Experiments 3 to 9", rep)
        self.assertIn("Total Marks Updated: 28", rep) # 2 students * 2 sections * 7 experiments = 28 updates


if __name__ == "__main__":
    unittest.main()
