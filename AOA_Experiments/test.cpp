#include<bits/stdc++.h>
using namespace std;

void printBoard(vector<vector<int>> &board, int N){
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

bool isSafe(vector<vector<int>> &board, int row, int col, int N){
    int i, j;
    for(i=row; i>=0; i--){
        if(board[i][col] == 1){
            return false;
        }
    }

    //left diagonal;
    for(i=row, j=col; i>=0 && j>=0; i--, j--){
        if(board[i][j] == 1){
            return false;
        }
    }

    //Right diagonal
    for(i=row, j=col; i>=0 && j<N; i--, j++){
        if(board[i][j] == 1){
            return false;
        }
    }
    return true;
}

bool solveQueen(vector<vector<int>> &board, int row, int N){
    if(row == N){
        return true;
    }
    for(int col=0; col<N; col++){
        if(isSafe(board, row, col, N)){
            board[row][col] = 1;
            if(solveQueen(board, row+1, N)){
                return true;
            }
            board[row][col] = 0;
        }
    }
    return false;
}

int main(){

    int N;
    cout<<"Enter N: ";
    cin>>N;

    vector<vector<int>> board(N, vector<int>(N, 0));

    if(solveQueen(board, 0, N)){
        printBoard(board, N);
    }else{
        cout<<"Solution does not exist";
    }

    return 0;
}