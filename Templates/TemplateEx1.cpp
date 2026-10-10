#include<bits/stdc++.h>
using namespace std;

//Max Element Template
template<typename T>
T findMaxElement(T arr[], int size){
    T maxVal = arr[0];
    for(int i=1; i<size; i++){
        if(arr[i] > maxVal){
            maxVal = arr[i];
        }
    }
    return maxVal;
}

//Sorting Template (Bubble Sort)
template<typename T>
void SortArray(T arr[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-1; j++){
            if(arr[j]>arr[j+1]){
                T temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){

    int intArr[] = {5, 2, 8, 9, 1, 7};
    float floatArr[] = {5.2, 2.1, 8.9, 9.2, 1.2, 7.6};
    int n = sizeof(intArr)/sizeof(intArr[0]);

    cout<<"Int Max Element: "<<findMaxElement(intArr, n)<<endl;

    cout<<"Float Max Element: "<<findMaxElement(floatArr, n)<<endl;

    cout<<"Sorting Int Array"<<endl;
    SortArray(intArr, n);
    for(int i=0; i<n; i++){
        cout<<intArr[i]<<" ";
    }
    cout<<endl;

    cout<<"Sorting Float Array"<<endl;
    SortArray(floatArr, n);
    for(int i=0; i<n; i++){
        cout<<floatArr[i]<<" ";
    }
    cout<<endl;

    return 0;
}