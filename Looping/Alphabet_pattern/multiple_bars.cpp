//Pattern 6 -> 

// * * * * * 
//         *
//         * * * * * 
//         *
// * * * * * 
//         *
//         *
//         *
//         *
// * * * * * * * * *  


#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {

    int rows = 9;
    int cols = 9;

    for (int i = 1; i <= rows; i++) {

        for (int j = 1; j <= cols; j++) {

            // Top horizontal line
            if (i == 1 && j <= 5)
                cout << "* ";

            // Middle horizontal line (right side)
            else if (i == 3 && j >= 5 && j <= 9)
                cout << "* ";

            // Middle horizontal line (left side)
            else if (i == 5 && j <= 5)
                cout << "* ";

            // Bottom horizontal line
            else if (i == 9)
                cout << "* ";

            // Vertical line
            else if (j == 5)
                cout << "* ";

            else
                cout << "  ";
        }

        cout << endl;
    }

    return 0;
}