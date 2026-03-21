//7. Count digits of a number: Count the number of digits in an integer N.

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int count = 0;

    //if value of n is 0 then number of digit is 1
    if (n == 0) {
        count = 1;
    } else {
        // while n is not equal to 0 we will count the number of digit
        while (n != 0) {
            n = n / 10;   // remove last digit
            count++;
        }
    }

    cout << count;

    return 0;
}