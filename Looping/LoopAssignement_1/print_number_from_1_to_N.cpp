// 1. Print numbers from 1 to N: Write a program to print numbers from 1 to a given number N.

#include<iostream>
using namespace std;

int main(){

    int N;
    cin>>N;

    for(int i=1; i<=N; i++){
        cout<<i<<" ";
    }

    return 0;
}