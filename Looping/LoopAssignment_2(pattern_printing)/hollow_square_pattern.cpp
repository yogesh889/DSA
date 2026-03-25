// 9. Hollow square pattern:

// * * * * *
// *       *
// *       *
// *       *
// * * * * *


#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= n; j++) {

            // Print star only on borders
            if(i == 1 || i == n || j == 1 || j == n)
                cout << "* ";
            else
                cout << "  ";
        }

        cout << endl;
    }
}