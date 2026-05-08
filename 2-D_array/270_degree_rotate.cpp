#include<iostream>
using namespace std;

int main(){

    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr1[3][3];

    int m = sizeof(arr[0])/sizeof(int);
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            arr1[i][j] = arr[j][n-i-1];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}