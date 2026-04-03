#include<iostream>
using namespace std;

int main(){

    int a = 10;  // ===> address of a is 1001
    
    int* p = &a; // ===> address of p is 2002
    int** q = &p; // ===> address of q is 3003
    int*** t = &q; // ===> address of t is 4004
    int**** m = &t; // ===> address of m is 5005;


    cout<<a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<q<<endl;
    cout<<&q<<endl;
    cout<<*q<<endl;
    cout<<**q<<endl;
    cout<<&t<<endl;
    cout<<****m<<endl;
    cout<<**m<<endl;
    cout<<m<<endl;


    return 0;
}