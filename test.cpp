#include<iostream>
using namespace std;

int main(){

    int x = 1;

    while(x<10){
        x = (x << 2) | 1;
        cout<<x<<" ";
    }
    // int y = 5 | 1;
    // cout<<y<<" ";

    return 0;
}