#include<iostream>
using namespace std;

void swap(int* p, int* q){
    int temp = *p;
    *p = *q; 
    *q = temp;
}

int main(){
    
    int arr[5] = {5, 2, 1, 0};
    
    int n = sizeof(arr)/sizeof(int);
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    
    for(int i=0; i<n-1; i++){
        
        cout<<arr[i]<<" ";
    }
    
    return 0;
}