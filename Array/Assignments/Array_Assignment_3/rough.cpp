#include <iostream>
using namespace std;

int main() {
    int arr1[3] = {1, 2, 3};//m
    int arr2[3] = {3, 4, 5};//n

    int i = 0, j = 0;
    int m=3, n=3;

    while(i<m && j<n){
        if(arr1[i] == arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }else if(arr1[i] < arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
        }else{
            cout<<arr2[j]<<" ";
            j++;
        }
    }

    while(i<m){
        cout<<arr1[i]<<" ";
        i++;
    }
    while(j<n){
        cout<<arr2[j]<<" ";
        j++;
    }

    return 0;
}