#include<iostream>
using namespace std;

int main(){

    // int a = 5;
    // cout<<&a<<endl;
    // cout<<a<<endl;

    int arr[5] = {4, 3, 1, 2, 6};
    // cout<<&arr<<endl;
    // cout<<arr<<endl;


    // All the 3 methods below mention to access the address of element is same.
    cout<<arr<<endl;
    cout<<arr+1<<endl;
    cout<<arr+2<<endl;

    cout<<(&arr+0)<<endl; // cout<<arr<<endl;
    cout<<(&arr+1)<<endl; // cout<<&arr[1]<<endl;
    cout<<(&arr+2)<<endl; // cout<<&arr[2]<<endl;

    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl; //address of the element present at 1st indices.
    cout<<&arr[2]<<endl;

// understanding pointer concept in arrary using variable pointer 

    int a = 6; // 11 ==> 13
    int* p = &a;
    *p = *p + 5;
    cout<<*p<<endl; //11
    *p = *p + 2;
    cout<<*p<<endl; //13

    cout<<*p+2<<endl; // 15
    cout<<*p+4<<endl; // 17

    
// Addition using pointer
    cout<<*arr<<endl; //4
    cout<<*arr+1<<endl; //5
    cout<<*arr+2<<endl; //6

// Accessing element using 2 different methods
    cout<<*(arr+0)<<endl; //4
    cout<<*(arr+1)<<endl; //3
    cout<<*(arr+2)<<endl; //1

    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;

    return 0;
}