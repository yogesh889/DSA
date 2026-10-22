#include<bits/stdc++.h>
using namespace std;

int main(){

    // int arr[4] = {0};
    // int arr1[4][4] = {{0}};
    // int arr1[4][4] = {0};

    vector<vector<int>> arr1(4, vector<int> (4, 0));

    // for(int i=0; i<4; i++){
    //     cout<<arr[i]<<" ";
    // }

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}