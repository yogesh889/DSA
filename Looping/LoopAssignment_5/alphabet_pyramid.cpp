// 4. Alphabet Pyramid Pattern :

//         A
//       A B A
//     A B C B A
//   A B C D C B A
// A B C D E D C B A

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for(int i = 1; i <= n; i++) {

        char ch = 'A';
        // Spaces for centering
        for(int s = 1; s <= n - i; s++)
            cout << "  ";

        // Ascending letters
        for(int j = 0; j < i; j++)
            cout << char(ch + j) << " ";

        // Descending letters
        for(int j = i - 2; j >= 0; j--)
            cout << char(ch + j) << " ";

        cout << endl;
    }
}