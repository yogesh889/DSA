#include<iostream>
using namespace std;

void merge(int* arr, int left, int mid, int right){
    int i = left, j = mid+1;
    int temp[right-left+1];
    int k = 0;

    while(i <= mid && j <= right){
        if(arr[i] < arr[j]){
            temp[k] = arr[j];
            k++;
            i++;
        }else{
            temp[k] = arr[j];
            k++;
            j++;
        }
    }

    while(i <= mid){
        temp[k] = arr[i];
        k++;
        i++;
    }

    while(j <= right){
        temp[k] = arr[j];
        k++;
        j++;
    }

    // copy back to original array
    for (i = left, k = 0; i <= right; i++, k++) {
        arr[i] = temp[k];
    }
}

void mergeSort(int* arr, int left, int right){

    if(left >= right){
        return;
    }

    int mid = (left + right)/2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);

    merge(arr, left, mid, right);

}

int main(){

    int arr[] = {6, 3, 9, 5, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}