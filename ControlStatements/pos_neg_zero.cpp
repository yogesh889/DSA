#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter Number: ";
    cin>>n;

    if(n<0){
        cout<<"Number is -ve";
    }else if(n==0){
        cout<<"Number is zero";
    }else{
        cout<<"Number is +ve";
    }

    return 0;
}