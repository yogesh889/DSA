// 12. Alphabet Diamond with Middle Spaces :

//     A
//    A B
//   A   C
//  A     D
// A B C D E
//  A     D
//   A   C
//    A B
//     A


#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    // Upper hollow pyramid
    for(int i = 1; i <= n; i++) {

        for(int s = 1; s <= n - i; s++) cout << " ";

        for(int j = 1; j <= i; j++) {

            if(j == 1 || j == i || i == n)
                cout << char('A' + j - 1) << " ";
            else
                cout << "  ";
        }

        cout << endl;
    }

    // Lower part
    for(int i = n - 1; i >= 1; i--) {

        for(int s = 1; s <= n - i; s++) cout << " ";

        for(int j = 1; j <= i; j++) {

            if(j == 1 || j == i)
                cout << char('A' + j - 1) << " ";
            else
                cout << "  ";
        }

        cout << endl;
    }
}