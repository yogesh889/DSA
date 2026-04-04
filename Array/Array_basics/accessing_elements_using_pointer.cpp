#include<iostream>
using namespace std;

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6};

    int a = 10;

    cout<<"a: "<<a<<endl;
    cout<<"*arr: "<<*arr<<endl;
    cout<<"*(arr+1): "<<*(arr+1)<<endl;
    cout<<"*(arr+5): "<<*(arr+5)<<endl;
    cout<<"*(arr+6): "<<*(arr+6)<<endl; //here it will give undefined behaviour - that means compiler can generate any number
    cout<<"*(arr+7): "<<*(arr+7)<<endl;
    cout<<"*(arr+8): "<<*(arr+8)<<endl;
    cout<<"*(arr+9): "<<*(arr+9)<<endl;


    return 0;
}