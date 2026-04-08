#include<iostream>
using namespace std;

void swap(int *p, int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main(){

    int arr[5] = {1, 2, 3, 4, 5};
  

    int size = sizeof(arr)/sizeof(int);
    
    for(int i=0; i<size/2; i++){
        swap(arr[i], arr[4-i]);
    }

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}