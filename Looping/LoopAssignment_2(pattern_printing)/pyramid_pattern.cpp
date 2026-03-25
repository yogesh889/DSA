// 6. Pyramid pattern:

//         *
//       * * *
//     * * * * * 
//   * * * * * * * 
// * * * * * * * * * 

#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    for(int i = 1; i <= n; i++) {

        // Spaces
        for(int s = 1; s <= n - i; s++)
            cout << "  ";

        // Stars (odd numbers: 1,3,5,7,9)
        for(int j = 1; j <= 2*i - 1; j++)
            cout << "* ";

        cout << endl;
    }
}