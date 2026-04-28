#include<iostream>
using namespace std;

// void swap(int* p, int* q){
//     int temp = *p;
//     *p = *q; 
//     *q = temp;
// }

void bubble_sort(int* arr, int n){

    // Base Case: array size 1 -> already sorted
    if(n == 1){
        return;
    }

    // one pass (largest element moves to end)
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            // swap(arr[i], arr[i+1]);
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }

    // recursive call for remaining array
    bubble_sort(arr, n-1);

}

int main(){

    int arr[5] = {3, 5, 12, 0, 8};
    int n = 5;

    // for(int i=0; i<n-1; i++){
    //     for(int j=0; j<n-i-1; j++){
    //         if(arr[j] > arr[j+1]){
    //             swap(arr[j], arr[j+1]);
    //         }
    //     }
    // }

    bubble_sort(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}