// 18. Reverse pyramid:

//  1 2 3 4
//    1 2 3
//      1 2
//        1


#include <iostream>
using namespace std;

int main() {
    int n;  // total number of rows
    cin>>n;

    // outer loop → controls rows from n down to 1
    for (int i = n; i >= 1; i--) {

        // loop → prints leading spaces (increasing each row)
        for (int s = 1; s <= n - i; s++) {
            cout << "  ";  // two spaces for alignment
        }

        // loop → prints numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            cout << j << " ";  // print ascending numbers
        }

        cout << endl;  // move to next line after each row
    }

    return 0;  // end of program
}