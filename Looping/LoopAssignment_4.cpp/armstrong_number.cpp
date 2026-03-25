#include <iostream>
using namespace std;

int main() {
    int n, original, rem;
    int sum = 0;

    cin >> n;
    original = n;

    while(n > 0) {
        rem = n % 10;
        sum += rem * rem * rem;
        n /= 10;
    }

    if(sum == original) {
        cout << "Armstrong";
    } else { 
        cout << "Not Armstrong";
    }

    return 0;
}