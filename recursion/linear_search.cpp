#include<iostream>
using namespace std;

int linear_search(int* arr, int n, int key, int index){
    if(index == n){
        return 0;
    }

    if(arr[index] == key){
        return index;
    }

    int smalloutput = linear_search(arr, n, key, index+1);

    return smalloutput;
}


int main(){

    int arr[5] = {4, 3, 7, 2, 0};
    int n = sizeof(arr)/sizeof(int);

    int key = 2;
    
    int ans = linear_search(arr, n, key, 0);

    cout<<ans<<endl;

    return 0;
}