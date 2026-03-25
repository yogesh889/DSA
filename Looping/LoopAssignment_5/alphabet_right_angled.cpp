// 2. Alphabet Right-Angled Triangle Pattern :

// A
// A B
// A B C
// A B C D
// A B C D E

#include <iostream>
using namespace std;

int main() {

    for(int i = 0; i < 5; i++) {
        char ch = 'A';
        // Print alphabets from A up to ith index
        for(int j = 0; j <= i; j++) {
            cout << ch<< " ";
            ch++;
        }
        cout << endl;
    }
}