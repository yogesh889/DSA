#include <bits/stdc++.h>
using namespace std;

#define N 4

void printBoard(int board[N][N]) {

    for(int i = 0; i < N; i++) {

        for(int j = 0; j < N; j++) {

            if(board[i][j] == 0) {
                cout << " . ";
            }
            else {
                cout << " Q ";
            }
        }

        cout << endl;
    }
}

bool isSafe(int board[N][N], int row, int col) {

    int i, j;

    // 1. Check column
    for(i = 0; i < row; i++) {

        if(board[i][col] == 1) {
            return false;
        }
    }

    // 2. Check left diagonal
    for(i = row - 1, j = col - 1;
        i >= 0 && j >= 0;
        i--, j--) {

        if(board[i][j] == 1) {
            return false;
        }
    }

    // 3. Check right diagonal
    for(i = row - 1, j = col + 1;
        i >= 0 && j < N;
        i--, j++) {

        if(board[i][j] == 1) {
            return false;
        }
    }

    return true;
}

bool solveNQueen(int board[N][N], int row) {

    // All queens placed
    if(row == N) {
        return true;
    }

    // Try every column
    for(int col = 0; col < N; col++) {

        if(isSafe(board, row, col)) {

            // Place queen
            board[row][col] = 1;

            // Solve next row
            if(solveNQueen(board, row + 1)) {
                return true;
            }

            // Backtrack
            board[row][col] = 0;
        }
    }

    return false;
}

int main() {

    int board[N][N] = {0};

    if(solveNQueen(board, 0)) {
        printBoard(board);
    }
    else {
        cout << "Solution does not exist";
    }

    return 0;
}