// 15. Alphabet Square Pattern : 

// A A A A A
// B B B B B
// C C C C C
// D D D D D
// E E E E E


#include <iostream>
using namespace std;

int main() {

    char ch = 'A';

    for(int i = 0; i < 5; i++) {

        for(int j = 0; j < 5; j++) {
            cout << char(ch + i) << " ";
        }

        cout << endl;
    }
}