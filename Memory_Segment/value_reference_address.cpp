#include<iostream>
using namespace std;

void pass_by_value(int m, int n){
    m = 50;
    n = 60;
}

void pass_by_reference(int &a, int &b){
    a = 20;
    b = 30;
}

void pass_by_address(int* p, int*q){
    *p = 90;
    *q = 12;
}

int main(){

    int a, b;
    cin>>a>>b;

    pass_by_value(a, b);
    cout<<"pass by value: "<<a<<" "<<b<<endl;

    pass_by_reference(a, b);
    cout<<"pass by reference: "<<a<<" "<<b<<endl;

    pass_by_address(&a, &b);
    cout<<"pass by address: "<<a<<" "<<b<<endl;
    
    return 0;
}