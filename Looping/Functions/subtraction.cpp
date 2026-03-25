#include<iostream>
using namespace std;

void subtraction(){
    int a, b;
    cout<<"enter number for subtraction: ";
    cin>>a>>b;
    cout<<a-b;
}

int multiplication(){
    int a, b;
    cout<<"enter number for multiplication: ";
    cin>>a>>b;
    cout<<a*b;
    cout<<endl;
    return 0;
}

void dividation(int m, int n){
    int z = m/n;
    cout<<z;
}

int sum(int m, int n){
    int sum = m+n;
    return sum;
}

int reminder(int m, int n){
    int rem = m % n;
    return rem;
}

int main(){

    subtraction();
    cout<<endl;
    int z = multiplication();
    cout<<z;
    cout<<endl;

    int a, b;
    cout<<"Enter number for dividation: ";
    cin>>a>>b;
    dividation(a, b);
    cout<<endl;

    int result;

    result = sum(a, b);
    cout<<"sum of number a and b is: "<<result;
    cout<<endl;

    int result_2 = reminder(a, b);
    cout<<result_2;

    return 0;
}


// sum of n numbers

