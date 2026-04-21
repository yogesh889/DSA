// 1.Find Pair with Given Sum: Write a program to find pair in an array whose sum equals a given target sum.

// Input: arr = [1, 4, 5, 3, 2], target = 6

// Output:(1, 5) (4, 2)

#include<iostream>
using namespace std;

void pair_sum_bruteforce_approach(int* arr, int n, int size){
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(i != j && arr[i]+arr[j] == n){
                cout<<"i: "<<i+1<<" "<<"j: "<<j+1<<endl;
            }
        }
    }
}

void pair_sum_optimal_approach(int* arr, int n, int size){
    int i=0; 
    int j=size-1;
    while(i<j){
        if(arr[i]+arr[j] == n){
            cout<<"i: "<<i+1<<" "<<"j: "<<j+1<<endl;
            i++;
            j--;
        }else if(arr[i]+arr[j] < n){
            i++;
        }else{
            j--;
        }
    }
}

int main(){

    int arr[5] = {1, 4, 5, 7, 9}; // array should be in sorted order
    int size = sizeof(arr)/sizeof(int);
    int n;
    cout<<"Enter target: ";
    cin>>n;

    pair_sum_bruteforce_approach(arr, n, size);

    pair_sum_optimal_approach(arr, n, size);

    return 0;
}