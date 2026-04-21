#include<iostream>
using namespace std;

void swap(int* p, int* q){
    int temp = *p; 
    *p = *q;
    *q = temp;
}

int main(){


    int arr[5] = {1, 0, 0, 3, 4};

    int j = 0;

    for(int i=0; i<5; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}