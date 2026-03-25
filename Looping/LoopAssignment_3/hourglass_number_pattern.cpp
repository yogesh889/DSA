// 14. Hourglass number pattern:


//  1 2 3 4 5
//   1 2 3 4
//    1 2 3
//     1 2
//      1
//     1 2
//    1 2 3
//   1 2 3 4
//  1 2 3 4 5


#include <iostream>
using namespace std;

int main() {
    int n;  // maximum width (top row count)
    cin>>n;

    // upper part → decreasing rows from n to 1
    for (int i = n; i >= 1; i--) {

        // loop → prints leading spaces (increasing each row)
        for (int s = 1; s <= n - i; s++) {
            cout << " ";  // space for alignment
        }

        // loop → prints numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            cout << j << " ";  // ascending numbers
        }

        cout << endl;  // move to next line
    }

    // lower part → increasing rows from 2 to n
    for (int i = 2; i <= n; i++) {

        // loop → prints leading spaces (decreasing each row)
        for (int s = 1; s <= n - i; s++) {
            cout << " ";  // space for alignment
        }

        // loop → prints numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            cout << j << " ";  // ascending numbers
        }

        cout << endl;  // move to next line
    }

    return 0;  // end of program
}
