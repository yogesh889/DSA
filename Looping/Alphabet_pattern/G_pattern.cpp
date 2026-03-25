// Pattern 4 -> 

// * * * * * 
// *
// *
// *   * * *
// *       *
// * * * * *  


#include <iostream>
using namespace std;

int main() {

    for(int i = 1; i <= 6; i++) {

        for(int j = 1; j <= 5; j++) {

            if(i == 1 || i == 6 || j == 1)
                cout << "* ";
            else if(i == 4 && j >= 3)
                cout << "* ";
            else if(i == 5 && j == 5)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}