#include<iostream>
using namespace std;

void print(int arr[5]){
    for(int i=0; i<5; i++){
        arr[i] = arr[i]*2;
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[5] = {1, 2, 3, 4, 5};

    print(arr);
    cout<<endl;

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}