#include<bits/stdc++.h>
using namespace std;

void printNumber(vector<int> arr, int index, int n){
    if(index == n){
        cout<<endl;
        return;
    }

    arr[index] += 2; //Forward Tracking
    cout<<arr[index]<<" ";
    printNumber(arr, index+1, n);
    arr[index] += 3;
    cout<<arr[index]<<" ";
}

int main(){

    vector<int> arr = {1, 2, 3, 4, 5};

    int n = arr.size();

    printNumber(arr, 0, n);
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}