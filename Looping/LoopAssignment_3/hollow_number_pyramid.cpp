// 12. Hollow number pyramid:

//     1
//    1 2
//   1   3
//  1 2 3 4


#include <iostream>
using namespace std;

int main() {
    int n;  // total number of rows
    cin>>n;

    // outer loop → controls rows from 1 to n
    for (int i = 1; i <= n; i++) {

        // loop → prints leading spaces to form pyramid shape
        for (int s = 1; s <= n - i; s++) {
            cout << " ";  // space for alignment
        }

        // inner loop → prints columns from 1 to i
        for (int j = 1; j <= i; j++) {

            // print numbers only on boundaries or last row
            if (j == 1 || j == i || i == n) {
                cout << j << " ";  // boundary numbers
            } else {
                cout << "  ";      // hollow space inside
            }
        }

        cout << endl;  // move to next line after each row
    }

    return 0;  // end of program
}