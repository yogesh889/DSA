#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 3;
    int m = 3;

    // int arr[m][n] = {
    //     {3, 2, 1}, 
    //     {11, 9, 7}, 
    //     {0, 99, 5}
    // };

    vector<vector<int>> arr = {
        {3, 2, 1}, 
        {11, 9, 7}, 
        {0, 99, 5}
    };

    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         arr[i][j] += 2;
    //     }
    //     cout<<endl;
    // }

    // cout<<endl;

    for(auto &row: arr){
        sort(row.begin(), row.end());
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // vector<vector<int>> vec(3, vector<int>(0));
    // for(int i=0; i<3; i++){
    //     for(auto x: vec){
    //         cout<<x<<" ";
    //     }
    // }

    return 0;
}