
// 3. Square of numbers:

//  1 1 1 1 1
//  2 2 2 2 2
//  3 3 3 3 3
//  4 4 4 4 4
//  5 5 5 5 5


#include <iostream>
using namespace std;

int main() {

    int n;  // size of square
    cin>>n;

    // Outer loop → rows
    for(int i = 1; i <= n; i++) {

        // Inner loop → columns
        for(int j = 1; j <= n; j++) {

            // Print row number i in every column
            cout << i << " ";
        }

        cout << endl; // move to next line
    }

    return 0;
}