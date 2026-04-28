#include<iostream>
using namespace std;

// void swap(int* p, int* q){
//     int temp = *p;
//     *p = *q; 
//     *q = temp;
// }

//recursion fuction bubble sort
void bubble_sort(int* arr, int n, int i){

    if(i == 5){
        return;
    }

    for(int j=0; j<n-i-1; j++){
        if(arr[j] > arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }

    bubble_sort(arr, n, i+1);

}

int main(){

    // Bubble sort
    int arr[5] = {5, 1, 0, 2, 6};

    int size = sizeof(arr)/sizeof(int);


    // Using recursion

    bubble_sort(arr, size, 0);


    // for(int i=0; i<size-1; i++){
    //     for(int j=0; j<size-i-1; j++){
    //         if(arr[j] > arr[j+1]){
    //             swap(arr[j], arr[j+1]);
    //         }
    //     }
    // }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}