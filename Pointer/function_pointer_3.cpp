#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;
}

int main(){

    int a = 10;
    int* p = &a;


    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;

    int (*fp)(int, int);

    fp = sum;

    cout<<fp(1, 2)<<endl;
    cout<<fp(1, 2)<<endl;


    return 0;
}