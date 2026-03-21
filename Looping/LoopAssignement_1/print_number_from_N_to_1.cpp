#include<iostream>
using namespace std;

int main(){

    int N;
    cin>>N;

    //We have initialized i with N and decrementing it so, each time loop is running we are printing value of i
    for(int i=N; i>=1; i--){
        cout<<i<<" ";
    }

    return 0;
}