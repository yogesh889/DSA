// 4. Repeated number pattern:

//  1
//  2 2
//  3 3 3
//  4 4 4 4
//  5 5 5 5 5


#include <iostream>
using namespace std;

int main() {
    int n;  // total number of rows
    cin>>n;

    // outer loop → controls rows from 1 to n
    for (int i = 1; i <= n; i++) {

        // inner loop → prints the number i, i times in each row
        for (int j = 1; j <= i; j++) {
            cout << i << " ";  // print current row number with space
        }

        cout << endl;  // move to next line after completing a row
    }

    return 0;  // end of program
}