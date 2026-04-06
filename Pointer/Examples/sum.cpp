#include<iostream>
using namespace std;


void sum(int *p, int *q, int *ans){
    *ans = *p + *q;
}

int main(){

    int a, b;
    int sumN = 0;
    cin>>a>>b;

    sum(&a, &b, &sumN);
    cout<<sumN;

    return 0;
}