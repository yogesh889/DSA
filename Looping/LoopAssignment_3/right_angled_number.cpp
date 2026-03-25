// 5. Right-angled number triangle:

//  1
//  1 2
//  1 2 3
//  1 2 3 4
//  1 2 3 4 5


#include <iostream>
using namespace std;

int main() {
    int n;  // total number of rows
    cin>>n;

    // outer loop → controls rows from 1 to n
    for (int i = 1; i <= n; i++) {

        // inner loop → prints numbers from 1 to i in each row
        for (int j = 1; j <= i; j++) {
            cout << j << " ";  // print current number in sequence
        }

        cout << endl;  // move to next line after each row
    }

    return 0;  // end of program
}