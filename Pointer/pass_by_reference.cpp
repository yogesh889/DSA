#include<iostream>
using namespace std;

//pass by reference 
void fun(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}


int main(){


    int a;
    int b;

    cin>>a>>b;

    fun(a, b);


    cout<<a<<" "<<b<<endl;

    return 0;
}