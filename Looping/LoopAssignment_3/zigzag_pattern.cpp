// 13. Zigzag pattern:


//  1
//  1 2
//  1 2 3
//  1 2
//  1


#include <iostream>
using namespace std;

int main() {
    int n;  // peak width (middle row length)
    cin>>n;

    // upper part → increasing rows from 1 to n
    for (int i = 1; i <= n; i++) {

        // prints numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            cout << j << " ";  // ascending sequence
        }

        cout << endl;  // move to next line
    }

    // lower part → decreasing rows from n-1 to 1
    for (int i = n - 1; i >= 1; i--) {

        // prints numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            cout << j << " ";  // ascending sequence
        }

        cout << endl;  // move to next line
    }

    return 0;  // end of program
}