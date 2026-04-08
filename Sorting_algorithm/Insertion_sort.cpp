#include<iostream>
using namespace std;

int main(){

    int arr[5] = {11, 12, 13, 5, 6};

    int n = 5;
    // suppose the starting array is arr[0] is unsorted so we will start from arr[1];
    // we will iterate over the array and keeps check the previous array if arr[i] element is greater previous array element
    for(int i=1; i<n; i++){
        // we found the element 
        int key = arr[i];
        int j = i-1;
        // traversing backward to check if key is greater then any element and keep on shifting the every element to right to place the key in its correct position
        while(j>=0 && key<arr[j]){
            arr[j+1] = arr[j];
            j = j-1;
        }
        // we will put the element in its correct position
        arr[j+1] = key;
    }


    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}