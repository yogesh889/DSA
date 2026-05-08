#include<iostream>
using namespace std;

void mid_row_col_elements(int (*arr)[3], int m, int n){
    int row_mid = m/2;
    int col_mid = n/2;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(i == row_mid || j == col_mid){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}

int main(){

    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int m = sizeof(arr[0])/sizeof(int);
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<m<<" "<<n<<endl;

    mid_row_col_elements(arr, m, n);

    return 0;
}