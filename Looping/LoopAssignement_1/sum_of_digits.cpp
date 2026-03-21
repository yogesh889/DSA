#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int sum = 0;

    while (n > 0) {
        int digit = n % 10;  // extract last digit
        sum += digit;        // add to sum
        n = n / 10;          // remove last digit
    }

    cout << sum;

    return 0;
}