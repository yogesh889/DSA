#include<iostream>
using namespace std;

void swap(int* p, int* q){
    int temp = *p;
    *p = *q; 
    *q = temp;
}

void reverse_row_in_2dArray(int (*arr)[3], int m, int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            swap(arr[i][j], arr[i][n-j]);
        }
    }
}

void printArray(int (*arr)[3], int m, int n){
    for(int i=0; i<=m; i++){
        for(int j=0; j<=n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int m = 2; 
    int n = 2;

    reverse_row_in_2dArray(arr, m, n);
    printArray(arr, m, n);

    return 0;
}