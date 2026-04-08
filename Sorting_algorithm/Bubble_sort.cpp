#include<iostream>
using namespace std;

int* bubble_sort_method_1(int* arr){
    for(int i=0; i<7; i++){
        for(int j=0; j<7-i-1; j++){

            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return arr;
}

void bubble_sort_method_2(int arr[7]){
    for(int i=0; i<7; i++){
        for(int j=0; j<7-i-1; j++){

            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[7] = {3, 2, 7, 5, 1, 9, 0};

    bubble_sort_method_2(arr);

    cout<<endl;

    int* ans = bubble_sort_method_1(arr);

    for(int i=0; i<7; i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}