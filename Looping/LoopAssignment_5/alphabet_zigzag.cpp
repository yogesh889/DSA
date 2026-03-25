// 13.  Alphabet Zig-Zag Pattern : 

// A B C D E
//  F G H I J
// K L M N O
//  P Q R S T
// U V W X Y


#include <iostream>
using namespace std;

int main() {

    char ch = 'A';

    for(int i = 1; i <= 5; i++) {

        if(i % 2 == 0) {
            cout << " ";  // shift for zigzag
        } 

        for(int j = 1; j <= 5; j++) {
            cout << ch++ << " ";
        }

        cout << endl;
    }
}