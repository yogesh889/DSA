#include <iostream>
using namespace std;

int main() {

    int n, rev = 0;
    cin >> n;

    while (n != 0) {
        int digit = n % 10;      // get last digit
        rev = rev * 10 + digit;  // append digit
        n = n / 10;              // remove last digit
    }

    cout << rev;

    return 0;
}