// Pattern 2 -> 

// * * * * *  
// *       *
// * * * * *
// * 
// * 
// *


#include <iostream>
using namespace std;

int main() {

    int n = 5;

    for(int i = 1; i <= 6; i++) {

        for(int j = 1; j <= n; j++) {

            if(i == 1 || i == 3 || j == 1)
                cout << "* ";
            else if(i == 2 && j == n)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}