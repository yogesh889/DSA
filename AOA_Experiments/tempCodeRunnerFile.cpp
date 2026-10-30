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

    for(i=row-1, j=col-1; i>=0 && j>=0; i--, j--){
        if(board[i][j] == 1){
            return false;
        }
    }

    for(i=row-1, j=col+1; i>=0 && j<N; i--, j++){
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
    //Try every column: O(N)
    for(int col=0; col<N; col++){
        //Check safe place in every column: O(N)
        if(isSafe(board, row, col, N)){
            board[row][col] = 1;
            //if in N*N matrix we have filled first row then 2nd row will have only N-1 row
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
    cout<<"Enter size of board: ";
    cin>>N; 

    if(N < 0){
        cout<<"Please Enter a +ve number";
    }

    vector<vector<int>> board(N, vector<int>(N, 0));

    if(solveQueen(board, 0, N)){
        printBoard(board, N);
    }else{
        cout<<"Solution does not exist";
    }
    
    return 0;
}

// Time complexity: O(N^2 *N!)
// Space complexity: O(N^2)