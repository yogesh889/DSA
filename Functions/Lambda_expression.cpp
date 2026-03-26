#include<iostream>
using namespace std;

void fun(){
    auto mul = [](int a, int b){
        cout<<"mul: "<<a*b<<endl;
    };
    mul(10, 7);
}

int main(){

    fun();

    return 0;
}