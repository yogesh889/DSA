#include<iostream>
using namespace std;

void swap(int* p, int* q){
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main(){

    int arr[6] = {3, 8, 5, 2, 1, 4};

    int s = 0;
    int e = 5;

    while(s<e){
        while(s<e && arr[s]%2 == 0){
            s++;
        }
        while(e>s && arr[e]%2 == 1){
            e--;
        }
        if(s<e){
            swap(arr[s], arr[e]);
            s++;
            e--
        }
    }

    for(int i=0; i<=e; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}