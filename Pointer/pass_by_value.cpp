#include<iostream>
using namespace std;

int fun(int x){
    x = 100;
    return x;
}

int main(){

    int n;
    cin>>n;

    int y = fun(n);

    cout<<y<<endl;

    return 0;
}