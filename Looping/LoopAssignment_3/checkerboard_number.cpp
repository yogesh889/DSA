// 20 Checkerboard numbers:

//  1 0 1 0 1
//  0 1 0 1 0
//  1 0 1 0 1
//  0 1 0 1 0


#include <iostream>
using namespace std;

int main() {
    int rows;  // total number of rows
    int cols;  // total number of columns
    cin>>rows>>cols;

    // outer loop → controls rows
    for (int i = 1; i <= rows; i++) {

        // inner loop → controls columns
        for (int j = 1; j <= cols; j++) {

            // print 1 if (row + column) is even, else print 0
            if ((i + j) % 2 == 0) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }

        cout << endl;  // move to next line after each row
    }

    return 0;  // end of program
}