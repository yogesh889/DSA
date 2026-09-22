#include<bits/stdc++.h>
using namespace std;
#define N 4

void printBoard(int board[N][N]){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(board[i][j] == 1){
                cout<<"Q ";
            }else{
                cout<<". ";
            }
        }
        cout<<endl;
    }
}

bool isSafe(int board[N][N], int row, int col){
    int i, j;

    //check col;
    for(int i=0; i<row; i++){
        if(board[i][col] == 1) return false;
    }

    //Check left diagonal
    for(i=row-1, j=col-1; i>=0 && j>=0; i--, j--){
        if(board[i][j] == 1) return false;
    }

    //check right diagonal
    for(i=row-1, j=col+1; i>=0 && j<N; i--, j++){
        if(board[i][j] == 1) return false;
    }

    return true;
}

bool solveQueen(int board[N][N], int row){
    //If we reach the last element that means we have found the solution so return true;
    if(row == N){
        return true;
    }

    for(int col = 0; col<N; col++){
        if(isSafe(board, row, col)){
            //place Queen
            board[row][col] = 1;

            if(solveQueen(board, row + 1)){
                return true;
            }

            //backtracking
            board[row][col] = 0;
        }
    }
    return false;
}

int main(){

    int board[N][N] = {0};

    //0->row
    if(solveQueen(board, 0)){
        printBoard(board);
    }else{
        cout<<"No solution exist";
    }

    return 0;
}