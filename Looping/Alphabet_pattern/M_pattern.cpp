
// Pattern 12 ->

// *         *
// *  *   *  *
// *    *    *
// *         *
// *         *


#include <iostream>
using namespace std;

int main() {

    int n = 7;  // Height of M

    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= n; j++) {

            // Left vertical line
            if(j == 1)

                cout << " *";

            // Right vertical line
            else if(j == n)

                cout << " *";

            // Upper-left diagonal
            else if(i <= n/2 + 1 && j == i)

                cout << " *";

            // Upper-right diagonal
            else if(i <= n/2 + 1 && j == n - i + 1)

                cout << " *";

            else
                cout << "  ";
        }

        cout << endl;
    }

    return 0;
}