#include<bits/stdc++.h>
using namespace std;

void printBoard(vector<vector<int>> &board, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(board[i][j] == 1){
                cout<<"Q ";
            }else{
                cout<<". ";
            }
        }
        cout<<endl;
    }
}

bool isSafe(vector<vector<int>> &board, int row, int col, int n){
    int i, j;
    for(int i=row; i>=0; i--){
        if(board[i][col] == 1){
            return false;
        }
    }
    for(i=row, j=col; i>=0 && j>=0; i--, j--){
        if(board[i][j] == 1){
            return false;
        }
    }
    for(i=row, j=col; i>=0 && j<n; i--, j++){
        if(board[i][j] == 1){
            return false;
        }
    }
    return true;
}

bool solveQueen(vector<vector<int>> &board, int n, int row){
    if(row == n){
        return true;
    }

    for(int col = 0; col<n; col++){
        if(isSafe(board, row, col, n)){
            board[row][col] = 1;
            if(solveQueen(board, n, row+1)){
                return true;
            }
            board[row][col] = 0;
        }
    }
    return false;
}

int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    vector<vector<int>> board(n, vector<int> (n, 0));

    if(solveQueen(board, n, 0)){
        printBoard(board, n);
    }else{
        cout<<"solution does not exist";
    }

    return 0;
}