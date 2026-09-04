//Insertion Sort

#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[5] = {11, 12, 13, 5, 6};
    int n = 5;
    for(int i=1; i<n; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 , key<arr[j]){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}