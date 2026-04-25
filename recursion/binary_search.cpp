#include<iostream>
using namespace std;

int binary_search(int* arr, int left, int right, int key){
    int smalloutput;
    if(left > right){
        return -1;
    }

    int mid = left+(right-left)/2;


    if(key > arr[mid]){
        smalloutput = binary_search(arr, mid+1, right, key);
        return smalloutput;
    }else if(key < arr[mid]){
        smalloutput = binary_search(arr, left, mid-1, key);
        return smalloutput;
    }else{
        return mid;
    }
}

int main(){

    int arr[7] = {1, 3, 5, 7, 9, 34, 43};
    int key = 3;

    int left = 0;
    int right = 6;

        // for(int i=0; i<6; i++){
        //     int mid = left + (right-left)/2;
        //     if(key > arr[mid]){
        //         left = mid+1;
        //     }
        //     if(key < arr[mid]){
        //         right = mid - 1;
        //     }
        //     if(arr[mid] == key){
        //         cout<<mid<<endl;
        //         break;
        //     }
        // }

    int ans = binary_search(arr, left, right, key);
    cout<<ans<<endl;

    return 0;
}