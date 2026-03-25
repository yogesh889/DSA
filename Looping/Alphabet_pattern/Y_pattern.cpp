// Pattern 10 ->

// *       *
//   *   *
//     *
//     *
//     *
//     *

#include <iostream>
using namespace std;

int main() {

    int n = 7;  // Height (use odd number for symmetry)

    int mid = n / 2 + 1;  // Center column

    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= n; j++) {

            // Upper part → two diagonals
            if(i <= mid) {

                if(j == i || j == n - i + 1)
                    cout << "*";
                else
                    cout << " ";
            }

            // Lower part → vertical line
            else {

                if(j == mid)
                    cout << "*";
                else
                    cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
