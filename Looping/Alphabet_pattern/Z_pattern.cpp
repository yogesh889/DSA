// Pattern 9 -> 

// * * * * *
//       *
//     *
//   *
// * * * * * 


#include <iostream>
using namespace std;

int main() {

    int n = 5;   // Size of Z

    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= n; j++) {

            // Top row OR bottom row
            if(i == 1 || i == n)
                cout << "* ";

            // Diagonal from top-right to bottom-left
            else if(j == n - i + 1)
                cout << "* ";

            else
                cout << "  ";
        }

        cout << endl;
    }

    return 0;
}