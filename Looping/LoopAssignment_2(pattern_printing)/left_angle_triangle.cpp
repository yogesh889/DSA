// 4. Left-angle triangle:

//         *
//       * *
//     * * * 
//   * * * *
// * * * * * 

#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    for(int i = 1; i <= n; i++) {

        // Print spaces first (right alignment)
        for(int s = 1; s <= n - i; s++) {
            cout << "  ";
        }

        // Print stars
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }

        cout << endl;
    }
}