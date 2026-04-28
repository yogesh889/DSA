#include<iostream>
using namespace std;

bool prime_number(int n, int i){

    if(n <= 1){
        return false;
    }

    // Stop when i exceeds sqrt(n)
    if(i * i > n){
        return true;
    }

    if(n % i == 0){
        return false;
    }

    return prime_number(n, i + 1);
}

int main(){

    int n;
    cin >> n;

    bool ans = prime_number(n, 2);

    if(ans){
        cout << "Prime number";
    }else{
        cout << "not a prime number";
    }

    return 0;
}