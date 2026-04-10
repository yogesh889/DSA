#include<iostream>
using namespace std;

void mul(int arr[5]){ // ==> void mul(int* arr) 
    for(int i=0; i<5; i++){
        arr[i] = arr[i]*2;
    }

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[5] = {1, 2, 3, 4, 5};

    mul(arr);
    cout<<endl;

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}