#include<iostream>
using namespace std;

int main(){
    
    int arr[5] = {4, 3, 1, 9, 0};

    for(int i=0; i<5-1; i++){
        int min = i;
        for(int j=i+1; j<5; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
            // if(arr[i] > arr[min]){
                int temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;
            // }
        }
    }

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}