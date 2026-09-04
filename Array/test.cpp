#include<bits/stdc++.h>
using namespace std;

// void print(int* arr, int n){
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }

int main(){

    vector<int> arr = {0, 2, 4, 5, 9, 11};
    int target = 13;

    int n = arr.size();

    int i = 0; 
    int j = n-1;

    while(i<j){
        int sum = arr[i] + arr[j];
        if(target == sum){
            cout<<"Target found: "<<i<<" "<<j;
            break;
        }
        if(target > sum){
            i++;
        }else{
            j--;
        }
    }

    return 0;
}