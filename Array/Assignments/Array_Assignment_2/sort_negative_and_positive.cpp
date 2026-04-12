#include<iostream>
using namespace std;

int main(){

    int arr[6] = {-1, 2, -3, 4, -5, 6};
    int size = sizeof(arr)/sizeof(int);

    // int j = 0;

    for(int j=0; j<size; ){
        for(int i=0; i<size; i++){
            if(arr[i]<0){
                swap(arr[i], arr[j]);
                j++;
            }
        }
    }

    // for(int i=0; i<size; i++){
    //     if(arr[i]<0){
    //         swap(arr[i], arr[j]);
    //         j++;
    //     }
    // }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}