#include<iostream>
using namespace std;

void print(int *p){
    *p = 20;
    cout<<p<<endl;
}

int* input(int* arr, int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    return arr;
}

void print(int* arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}

int main(){

    int* p = new int(10);
    cout<<*p<<endl;
    print(p);
    cout<<*p<<endl;

    int n;
    cin>>n;
    
    int* arr = new int[n];

    int* ans = input(arr, n);

    print(ans, n);

    return 0;
}