#include<iostream>
using namespace std;

int* input(int* arr, int n){

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    return arr;
}

void print(int* ans, int n){
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
}

int main(){

    int n;
    cin>>n;

    int* arr = new int[n];

    int* ans = input(arr, n);

    print(ans, n);

    return 0;
}