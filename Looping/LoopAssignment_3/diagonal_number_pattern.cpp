// 19. Diagonal number pattern:

//  1
//   2
//    3
//     4


#include <iostream>
using namespace std;

int main() {
    int n;  // total numbers (rows)
    cin>>n;

    // outer loop → controls rows from 1 to n
    for (int i = 1; i <= n; i++) {

        // loop → prints leading spaces to shift number right each row
        for (int s = 1; s < i; s++) {
            cout << " ";  // space for diagonal alignment
        }

        // print the number equal to current row
        cout << i;

        cout << endl;  // move to next line after each row
    }

    return 0;  // end of program
}