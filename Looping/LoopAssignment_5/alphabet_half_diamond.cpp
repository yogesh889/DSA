// 9. Alphabet Half Diamond :

// A
// A B
// A B C
// A B C D
// A B C D E
// A B C D
// A B C
// A B
// A

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    // Upper
    for(int i = 1; i <= n; i++) {
        int ch = 'A';
        for(int j = 1; j <= i; j++)
            cout << char(ch + j - 1) << " ";
        cout << endl;
    }

    // Lower
    for(int i = n-1; i >= 1; i--) {
        int ch = 'A';
        for(int j = 1; j <= i; j++)
            cout << char(ch + j - 1) << " ";
        cout << endl;
    }
}
