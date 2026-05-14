#include <iostream>
using namespace std;

#define N 9

// Check whether placing num is safe or not
bool isSafe(int mat[N][N], int row, int col, int num)
{
    // ROW CHECK
    for(int x = 0; x < N; x++)
    {
        if(mat[row][x] == num)
            return false;
    }

    // COLUMN CHECK
    for(int x = 0; x < N; x++)
    {
        if(mat[x][col] == num)
            return false;
    }

    // 3x3 GRID CHECK
    int startRow = row - (row % 3);
    int startCol = col - (col % 3);

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(mat[startRow + i][startCol + j] == num)
                return false;
        }
    }

    return true;
}

// Sudoku Solver using Backtracking
bool solveSudoku(int mat[N][N], int row, int col)
{
    // BASE CASE
    if(row == N-1 && col == N)
        return true;

    // MOVE TO NEXT ROW
    if(col == N)
    {
        row++;
        col = 0;
    }

    // SKIP FILLED CELLS
    if(mat[row][col] != 0)
    {
        return solveSudoku(mat, row, col + 1);
    }

    // TRY NUMBERS 1 TO 9
    for(int num = 1; num <= 9; num++)
    {
        if(isSafe(mat, row, col, num))
        {
            // PLACE NUMBER
            mat[row][col] = num;

            // RECURSIVE CALL
            if(solveSudoku(mat, row, col + 1))
                return true;

            // BACKTRACK
            mat[row][col] = 0;
        }
    }

    return false;
}

int main()
{
    int mat[N][N] =
    {
        {3,0,6,5,0,8,4,0,0},
        {5,2,0,0,0,0,0,0,0},
        {0,8,7,0,0,0,0,3,1},
        {0,0,3,0,1,0,0,8,0},
        {9,0,0,8,6,3,0,0,5},
        {0,5,0,0,9,0,6,0,0},
        {1,3,0,0,0,0,2,5,0},
        {0,0,0,0,0,0,0,7,4},
        {0,0,5,2,0,6,3,0,0}
    };

    if(solveSudoku(mat, 0, 0))
    {
        cout << "Solved Sudoku:\n\n";

        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "No solution exists";
    }

    return 0;
}