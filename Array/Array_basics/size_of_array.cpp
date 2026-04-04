#include<iostream>
using namespace std;

int main(){


    // if you don't specify size -> compiler decides
    // if you specify size -> compiler trust you blindly 
    int arr[] = {3, 4, 5, 1, 2, 7, 45, 34, 32};

    // total size of array of element
    // each element is of 4 byte and total elements are 9 so 9*4 = 36;
    int total_size = sizeof(arr);

    cout<<total_size<<endl;

    int size = sizeof(arr)/sizeof(int);
    // int size = sizeof(arr)/sizeof(arr[0]);

    cout<<size<<endl;

    return 0;
}