// 10. Number pyramid (increment):

//     1
//    1 2  
//   1 2 3
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
            cout << " ";  // single space for alignment
        }

        // loop → prints increasing numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            cout << j << " ";  // print numbers with space
        }

        cout << endl;  // move to next line after each row
    }

    return 0;  // end of program
}