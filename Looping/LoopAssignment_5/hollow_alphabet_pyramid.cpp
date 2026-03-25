// 8. Alphabet Pyramid with Spaces : 

//     A
//    A B
//   A   C
//  A     D
// A B C D E

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for(int i = 1; i <= n; i++) {

        int ch = 'A';

        for(int s = 1; s <= n - i; s++)
            cout << " ";

        for(int j = 1; j <= i; j++) {

            if(j == 1 || j == i || i == n)
                cout << char(ch + j - 1) << " ";
            else
                cout << "  ";
        }

        cout << endl;
    }
}