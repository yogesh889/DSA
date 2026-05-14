#include <iostream>
using namespace std;

#define N 4

// Function to print board
void printBoard(int board[N][N])
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(board[i][j] == 1)
                cout << "Q ";
            else
                cout << ". ";
        }
        cout << endl;
    }
}

// Check if position is safe
bool isSafe(int board[N][N], int row, int col)
{
    int i, j;

    // Check column
    for(i = 0; i < row; i++)
    {
        if(board[i][col] == 1)
            return false;
    }

    // Check left diagonal
    for(i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {
        if(board[i][j] == 1)
            return false;
    }

    // Check right diagonal
    for(i = row - 1, j = col + 1; i >= 0 && j < N; i--, j++)
    {
        if(board[i][j] == 1)
            return false;
    }

    return true;
}

// Recursive function
bool solveNQueen(int board[N][N], int row)
{
    // Base case
    if(row == N)
        return true;

    // Try every column
    for(int col = 0; col < N; col++)
    {
        // Check safe position
        if(isSafe(board, row, col))
        {
            // Place queen
            board[row][col] = 1;

            // Recursive call
            if(solveNQueen(board, row + 1))
                return true;

            // Backtracking
            board[row][col] = 0;
        }
    }

    return false;
}

int main()
{
    int board[N][N] = {0};

    if(solveNQueen(board, 0))
    {
        printBoard(board);
    }
    else
    {
        cout << "No Solution Exists";
    }

    return 0;
}


// subsets
// permutations
// N queens
// sudoku
// combination sum
// maze problems