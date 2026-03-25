// 1. Simple number pattern:

//  1
//  1 2
//  1 2 3
//  1 2 3 4
//  1 2 3 4 5


#include <iostream>
using namespace std;

int main() {

    int n;  // number of rows
    cin>>n;

    // Outer loop → controls rows
    for(int i = 1; i <= n; i++) {

        // Inner loop → prints numbers from 1 to i
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl; // move to next line
    }

    return 0;
}