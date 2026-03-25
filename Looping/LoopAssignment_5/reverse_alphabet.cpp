// 14. Reverse Alphabet Pattern : 

// A B C D E
//   A B C D
//     A B C
//       A B
//         A


#include <iostream>
using namespace std;

int main() {

    for(int i = 5; i >= 1; i--) {
        char ch = 'A';
        // Increasing spaces
        for(int s = 1; s <= 5 - i; s++)
            cout << "  ";

        for(int j = 1; j <= i; j++)
            cout << char(ch + j - 1) << " ";

        cout << endl;
    }
}