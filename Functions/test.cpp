#include<iostream>
using namespace std;

int sum(){
    int a, b;
    a = 50; 
    b = 60;

    return a+b;
}

int sub(){
    int a, b;
    a = 20; 
    b = 50;
    int c = b-a;
        
    return c;
}

int main(){

    int result1 = sum();

    int result2 = sub();

    cout<<result1<<" "<<result2<<endl;



    return 0;
}