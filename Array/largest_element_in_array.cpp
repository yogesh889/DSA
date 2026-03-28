// Problem Statement: Given an array, we have to find the largest element in the array.

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];

    int max = INT_MIN;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout<<max<<endl;

    return 0;
}