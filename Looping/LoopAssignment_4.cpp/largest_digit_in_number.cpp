//8. Find the largest digit: Identify the largest digit in a number 𝑁.

#include <iostream>
using namespace std;

int main() {
    int n, maxDigit = 0, rem;
    cin >> n;

    while(n > 0) {
        rem = n % 10;
        if(rem > maxDigit) {
            maxDigit = rem;
        }
        n /= 10;
    }

    cout << maxDigit;
    return 0;
}