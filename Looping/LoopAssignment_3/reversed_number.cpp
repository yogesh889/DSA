// 2. Reversed number pattern:

//  1
//  2 1
//  3 2 1
//  4 3 2 1
//  5 4 3 2 1


#include <iostream>
using namespace std;

int main() {

    int n;  // number of rows
    cin>>n;

    // Outer loop → controls rows
    for(int i = 1; i <= n; i++) {

        // Inner loop → prints numbers from i down to 1
        for(int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        cout << endl; // move to next line
    }

    return 0;
}