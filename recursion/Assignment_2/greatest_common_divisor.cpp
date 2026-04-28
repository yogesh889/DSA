#include<iostream>
using namespace std;

int gcd(int a, int b){

    if(b == 0){
        return a;
    }
    if(a == 0){
        return b;
    }

    return gcd(b, a % b);
}

int main(){

    int a = 18, b = 20;

    cout << gcd(a, b);

    return 0;
}