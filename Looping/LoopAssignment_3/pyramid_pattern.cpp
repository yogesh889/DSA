// 8. Pyramid pattern:

//        1
//      1 2 1
//    1 2 3 2 1
//  1 2 3 4 3 2 1


#include <iostream>
using namespace std;

int main() {
    int n;  // total number of rows
    cin>>n;

    // outer loop → controls rows from 1 to n
    for (int i = 1; i <= n; i++) {

        // loop → prints leading spaces to center the pyramid
        for (int s = 1; s <= n - i; s++) {
            cout << "  ";  // print two spaces for alignment
        }

        // loop → prints increasing numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            cout << j << " ";  // print ascending part
        }

        // loop → prints decreasing numbers from i-1 down to 1
        for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";  // print descending part
        }

        cout << endl;  // move to next line after each row
    }

    return 0;  // end of program
}