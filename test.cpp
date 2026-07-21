#include<bits/stdc++.h>
using namespace std;

void printNumber(int a){
    if(a<=0){
        return;
    }

    
    printNumber(a-1);
    cout<<a<<" ";
}

int main(){

    int n;
    cin>>n;

    printNumber(n);

    return 0;
}