//5. Perfect number: Check if a number is a perfect number (e.g., 6, where the sum of its divisors 1, 2, 3 equals the number).

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;

    for(int i = 1; i < n; i++) {
        if(n % i == 0) sum += i;
    }

    if(sum == n) {
        cout << "Perfect";
    } else {
        cout << "Not Perfect";
    }

    return 0;
}