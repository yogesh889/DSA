// Pattern 1 -> 

// * * * * * 
// *       *
// * * * * * 
// *       *
// *       *
// *       *


#include <iostream>
using namespace std;

int main() {

    int n = 5;

    for(int i = 1; i <= 6; i++) {

        for(int j = 1; j <= n; j++) {

            // Top row OR middle row OR first column
            if(i == 1 || i == 3 || j == 1)
                cout << "* ";
            else if(j == n)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}