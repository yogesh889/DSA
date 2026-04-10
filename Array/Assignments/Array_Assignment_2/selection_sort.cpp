#include<iostream>
using namespace std;

void selection_sort(int* arr, int n){
    for(int i=1; i<n; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && key<arr[j]){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

void print(int* arr, int n){
    for(int i=0; i<n; i++){
        cout<<*(arr+i)<<" ";
    }
}

int main(){

    int arr[5] = {3, 5, 2, 0, 1};
    int size = sizeof(arr)/sizeof(int);

    selection_sort(arr, size);

    print(arr, size);

    return 0;
}