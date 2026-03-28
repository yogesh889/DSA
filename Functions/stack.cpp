#include<iostream>
using namespace std;

void fun1(){
    int a = 5; 
    int b = 4; 
    cout<<a+b<<endl;
    auto fun2 = [](){
        int a = 1; 
        int b = 4;
        cout<<a*b<<endl;
    };
    fun2();
}


int main(){

    fun1();

    return 0;
}