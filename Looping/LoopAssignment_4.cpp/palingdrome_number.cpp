//6. Palindrome number: Verify if a number is a palindrome (e.g.,  121).

#include <iostream>
using namespace std;

int main() {
    int n, rev = 0, rem, original;
    cin >> n;
    original = n;

    while(n > 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    if(rev == original) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }

    return 0;
}