#include<iostream>
using namespace std;

bool isEven(int n){
    // handle negative numbers
    if(n < 0){
        n = -n;
    }

    // base cases
    if(n == 0){
        return true;   // even
    }
    if(n == 1){
        return false;  // odd
    }

    // recursive call
    return isEven(n - 2);
}

int main(){
    int n;
    cin >> n;

    if(isEven(n)){
        cout << "Even";
    } else {
        cout << "Odd";
    }

    return 0;
}