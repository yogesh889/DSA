// 4. Find the Smallest Missing Positive Integer: Write a program to find the smallest missing positive integer in an unsorted array of integers.

// Input: arr = [3, 4, -1, 1]
// Output: 2

#include<iostream>
using namespace std;

int main(){

    int arr[5] = {3, 4, -1, 6, 9};
    int size = sizeof(arr)/sizeof(int);

    int min = 0;

    for(int i=0; i<size; i++){
        if(arr[i]>=0 && arr[min] > arr[i]){
            min = i;
        }
    }

    cout<<arr[min]<<" ";

    return 0;
}