// Pattern 8 -> 

//   * * *
// *       *
// *       *
// *     * *
//   * * * *
//           *

#include <iostream>
using namespace std;

int main() {

    int n = 5;  // Size of the main box

    for(int i = 1; i <= n + 1; i++) {

        for(int j = 1; j <= n + 2; j++) {

            // Top curve
            if(i == 1 && j >= 2 && j <= n)
                cout << "* ";

            // Bottom curve
            else if(i == n && j >= 2 && j <= n + 1)
                cout << "* ";

            // Left side
            else if(j == 1 && i >= 2 && i <= n - 1)
                cout << "* ";

            // Right side
            else if(j == n + 1 && i >= 2 && i <= n - 1)
                cout << "* ";

            // Inner tail of Q
            else if(i == n - 1 && j == n)
                cout << "* ";

            // Outer tail (last row)
            else if(i == n + 1 && j == n + 2)
                cout << "* ";

            else
                cout << "  ";
        }

        cout << endl;
    }

    return 0;
}