#include<iostream>
using namespace std;

int main(){

    int arr[10] = {1, 1, 2, 2, 3, 3, 3, 4, 4, 4};

    int hash[20] = {0};

    for(int i=0; i<10; i++){
        hash[arr[i]]++;
    }

    for(int i=0; i<20; i++){
        if(hash[i] != 0){
            cout<<hash[i]<<" ";
        }
    }

    return 0;
}