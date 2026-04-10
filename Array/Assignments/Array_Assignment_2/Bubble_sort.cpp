#include<iostream>
using namespace std;

void swap(int* p, int* q){
    int temp = *p;
    *p = *q;
    *q = temp;
}

void bubble_sort(int* arr, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void print(int* arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[5] = {4, 3, 0, 1, 2};
    int size = sizeof(arr)/sizeof(int);

    bubble_sort(arr, size);

    print(arr, size);

    return 0;
}