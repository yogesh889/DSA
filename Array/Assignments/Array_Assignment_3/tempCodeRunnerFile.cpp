// 1. Move All Zeros to the End: Write a program to move all zeros in an array to the end without changing the relative order of non-zero elements.

// Input: arr = [0, 1, 2, 0, 3, 4]
// Output : 1 2 3 4 0 0

#include<iostream>
using namespace std;

void swap(int* p, int* q){
    int temp = *p;
    *p = *q; 
    *q = temp;
}

int main(){

    int arr[6] = {0, 1, 2, 0, 3, 4};
    int size = sizeof(arr)/sizeof(int);

    int j = 0; // position for next non-zero

    for(int i=0; i<size; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]); //// move non-zero forward
            j++;
        }
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}