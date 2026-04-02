#include<iostream>
using namespace std;


int main(){

    int a = 10;
    int b = 20;

    int *p = &b;
    int *q = &a;


    cout<<*p-*q<<endl;
    // cout<<p+q<<endl;
    cout<<p<<endl;
    cout<<q<<endl;
    cout<<&b-&a<<endl;


    return 0;
}