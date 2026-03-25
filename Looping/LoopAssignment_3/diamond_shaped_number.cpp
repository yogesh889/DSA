// 9. Diamond-shaped number pattern:

//        1
//      1 2 1
//    1 2 3 2 1
//  1 2 3 4 3 2 1
//    1 2 3 2 1
//      1 2 1
//        1


#include <iostream>
using namespace std;

int main() {
    int n;  // number of rows for the upper half
    cin>>n;

    // upper pyramid (including middle row)
    for (int i = 1; i <= n; i++) {

        // loop → prints leading spaces
        for (int s = 1; s <= n - i; s++) {
            cout << "  ";  // spaces for alignment
        }

        // loop → prints increasing numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            cout << j << " ";  // ascending part
        }

        // loop → prints decreasing numbers from i-1 to 1
        for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";  // descending part
        }

        cout << endl;  // move to next line
    }

    // lower inverted pyramid
    for (int i = n - 1; i >= 1; i--) {

        // loop → prints leading spaces
        for (int s = 1; s <= n - i; s++) {
            cout << "  ";  // spaces for alignment
        }

        // loop → prints increasing numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            cout << j << " ";  // ascending part
        }

        // loop → prints decreasing numbers from i-1 to 1
        for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";  // descending part
        }

        cout << endl;  // move to next line
    }

    return 0;  // end of program
}