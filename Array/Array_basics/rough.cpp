#include<iostream>
using namespace std;

void swap(int* p, int* q){
    int temp = *p; 
    *p = *q; 
    *q = temp;
}

int main(){

    int arr[5] = {0, 1, 0, 3, 13};
    int size = sizeof(arr)/sizeof(int);

    // for(int i=0; i<size-1; i++){
    //     for(int j=i+1; j<size; j++){
    //         if(j != 0){
    //             swap(arr[j], arr[i]);
    //             break;
    //         }
    //     }
    // }

    int i=0, j=0;

    while(i<size-1 && j<size){
        if(arr[j] != 0){
            swap(arr[i], arr[j]);
            i++;
        }
        j++;
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

int n = nums.size();
        int i=0; 
        int j = i+1;
        while(j<n){
            if(nums[i] != 0){
                i++;
            }
            if(nums[j] != 0 && nums[i] == 0){
                swap(nums[i], nums[j]);
                i++;
            }
            j++;
        }