#include<iostream>
using namespace std;

void swap(int* p, int* q){
    int temp = *p;
    *p = *q; 
    *q = temp;
}

void insertion_sort(int* arr, int n){
    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}

void print(int* arr, int n){
    for(int i=0; i<n; i++){
        cout<<*(arr + i)<<" ";
    }
}

int main(){

    int arr[5] = {4, 3, 0, 1, 2};
    int size = sizeof(arr)/sizeof(int);

    insertion_sort(arr, size);

    print(arr, size);

    return 0;
}