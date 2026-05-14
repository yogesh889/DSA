#include<iostream>
using namespace std;

int main(){

    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6}, 
        {7, 8, 9}
    };

    int temp[3][3];

    int m = sizeof(arr[0])/sizeof(int);
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            temp[i][j] = arr[n-j-1][i];
        }
        cout<<endl;
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<temp[i][j];
        }
        cout<<endl;
    }

    return 0;
}