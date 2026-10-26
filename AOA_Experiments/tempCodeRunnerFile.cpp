#include<bits/stdc++.h>
using namespace std;

void printArray(vector<int> &arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void printNumber(vector<int> &arr, int index, int n){
    if(index == n){
        printArray(arr, n);
        cout<<endl;
        return;
    }
    arr[index] += 1;
    printNumber(arr, index+1, n);
    arr[index] += 1;
}

int main(){

    int n;
    cin>>n;
    vector<int> arr(n, 0);

    cout<<"Before forward Tracking: ";
    printArray(arr, n);
    cout<<endl;
    cout<<"After forward Tracking and before Backtracking: ";
    printNumber(arr, 0, n);
    cout<<endl;
    cout<<"After backTracking: ";
    printArray(arr, n);

    return 0;
}