// 15. Pascal's triangle:


//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1



#include <iostream>
using namespace std;

int main() {
    int n;  // total number of rows
    cin>>n;

    // outer loop → controls rows from 0 to n-1
    for (int i = 0; i < n; i++) {

        // loop → prints leading spaces for pyramid alignment
        for (int s = 0; s < n - i - 1; s++) {
            cout << " ";  // space for centering
        }

        int num = 1;  // first value in every row is always 1

        // inner loop → prints values in the current row
        for (int j = 0; j <= i; j++) {
            cout << num << " ";  // print current value

            // compute next value using Pascal’s formula
            num = num * (i - j) / (j + 1);
        }

        cout << endl;  // move to next line after each row
    }

    return 0;  // end of program
}