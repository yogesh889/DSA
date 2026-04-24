#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return ;
    }
    int smalloutput = factorial(n-1);

    return smalloutput*factorial(n-1);
}

int main(){

    int n;
    cin>>n;

    int ans = factorial(n);

    return 0;
}