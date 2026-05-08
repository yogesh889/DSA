#include<iostream>
using namespace std;

void print_left_diagonal_element(int (*p)[3], int m, int n){   // p is a pointer to an integer array of size 4
    cout<<"left diagonal element: ";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(i == j){
                cout<<p[i][j]<<" ";
            }
        }
    }
    cout<<endl;
}


void print_right_diagonal_element(int (*p)[3], int m, int n){
    cout<<"right diagonal element: ";
    for(int i=m-1; i>=0; i--){
        for(int j=0; j<n; j++){
            // if(i == n-j-1){
            //     cout<<p[i][j]<<" ";
            // }
            if(j = n+i-1){
                cout<<p[i][j]<<" ";
            }
        }
    }
}

int main(){

    int p[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int m = sizeof(p[0])/sizeof(int);
    int n = sizeof(p)/sizeof(p[0]);


    print_left_diagonal_element(p, m, n);
    print_right_diagonal_element(p, m, n);

    return 0;
}