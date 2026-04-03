#include<iostream>
using namespace std;

int main(){

    int a = 5;
    int* p = &a;
    int* q = p;

    *q = 20;

    cout << a << " " << *p;

    return 0;
}

// Both p and q point to same memory!