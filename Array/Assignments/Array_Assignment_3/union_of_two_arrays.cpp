#include<iostream>
using namespace std;

int main(){

    int arr1[] = {1, 2, 3};
    int arr2[] = {3, 4, 5};

    int n1 = 3, n2 = 3;

    // Print first array
    for(int i=0; i<n1; i++){
        cout<<arr1[i]<<" ";
    }

    // Add only unique from second
    for(int i=0; i<n2; i++){ 
        bool found = false;
        for(int j=0; j<n1; j++){
            if(arr2[i] == arr1[j]){
                found = true;
                break;
            }
        }
        if(!found){
            cout<<arr2[i]<<" ";
        }
    }

    return 0;
}