// 3. Inverted Alphabet Right-Angled Triangle Pattern :

// A B C D E
// A B C D
// A B C
// A B
// A


#include <iostream>
using namespace std;

int main() {

    for(int i = 5; i >= 1; i--) {   
        char ch = 'A';
        for(int j = 0; j < i; j++) {
            cout << ch<< " ";
            ch++;
        }

        cout << endl;
    }
}