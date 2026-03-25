// 13. Print Butterfly:


// *                 *
// * *             * * 
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * *
// * * * * * * * * * *
// * * * *     * * * * 
// * * *         * * *
// * *             * *
// *                 *


#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    // Upper part
    for(int i = 1; i <= n; i++) {

        // Left stars
        for(int j = 1; j <= i; j++)
            cout << "* ";

        // Middle spaces
        for(int s = 1; s <= 2*(n - i); s++)
            cout << "  ";

        // Right stars
        for(int j = 1; j <= i; j++)
            cout << "* ";

        cout << endl;
    }

    // Lower part
    for(int i = n; i >= 1; i--) {

        for(int j = 1; j <= i; j++)
            cout << "* ";

        for(int s = 1; s <= 2*(n - i); s++)
            cout << "  ";

        for(int j = 1; j <= i; j++)
            cout << "* ";

        cout << endl;
    }
}