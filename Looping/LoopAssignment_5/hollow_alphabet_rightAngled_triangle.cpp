// 7. Hollow Alphabet Right-Angled Triangle Pattern :

// A
// A B
// A   C
// A     D
// A B C D E

#include <iostream>
using namespace std;

int main() {

    for(int i = 1; i <= 5; i++) {
        char ch = 'A';
        for(int j = 1; j <= i; j++) {

            // Border conditions
            if(j == 1 || j == i || i == 5)
                cout << char(ch + j - 1) << " ";
            else
                cout << "  ";
        }

        cout << endl;
    }
}