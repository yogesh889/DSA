// Pattern 3 -> 

// * * * * *
// *       *
// *       *
// *   * *
// *       *
// *       *
// * * * * *


#include <iostream>
using namespace std;

int main() {

    int n = 7;

    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= 5; j++) {

            if(i == 1 || i == n)           // top & bottom
                cout << "* ";
            else if(j == 1 || j == 5)      // sides
                cout << "* ";
            else if(i == 4 && (j == 3 || j == 4)) // inner bar
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}