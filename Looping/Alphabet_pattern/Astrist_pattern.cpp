// Pattern 5 -> 

// *     *     *
//   *   *   *
//     * * *
// * * * * * * * 
//     * * *
//   *   *   *
// *     *     *


#include <iostream>
using namespace std;

int main() {

    int n = 7;

    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= n; j++) {

            // X shape OR middle row
            if(j == i || j == n - i + 1 || i == 4)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}
