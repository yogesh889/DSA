#include<iostream>
using namespace std;

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6};

    cout<<"address of 1st element of array: "<<arr<<endl; // give address of array -> address of first element
    cout<<"value of 1st element: "<<*arr<<endl<<endl;

    cout<<"address of 2nd element of array: "<<arr+1<<endl; //give address of 2nd element of array;
    cout<<"value of 2nd element: "<<*(arr+1)<<endl; // give 2nd element of array;
    
    return 0;
}