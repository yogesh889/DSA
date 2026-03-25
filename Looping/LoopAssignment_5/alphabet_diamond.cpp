// 5. Alphabet Diamond Pattern :
// 1 2 3 4 5 6 7 8 9 10
//         A --------------1
//       A B A ------------2
//     A B C B A ----------3
//   A B C D C B A --------4
// A B C D E D C B A ------5
//   A B C D C B A --------4
//     A B C B A ----------3
//       A B A ------------2
//         A --------------1


#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Upper pyramid
    for(int i = 1; i <= n; i++) {
        int ch = 'A';
        //printing space
        for(int s = 1; s <= n - i; s++) {
            cout << "  ";
        }
        //printing character upto middle
        for(int j = 0; j < i; j++) {
            cout << char(ch + j) << " ";
        }
        //printing character after middle
        for(int j = i - 2; j >= 0; j--) {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }

    // Lower pyramid
    for(int i = n - 1; i >= 1; i--) {
        int ch = 'A';
        for(int s = 1; s <= n - i; s++) {
            cout << "  ";
        }
        for(int j = 0; j < i; j++) {
            cout << char(ch + j) << " ";
        }
        for(int j = i - 2; j >= 0; j--) {
            cout << char(ch + j) << " ";
        }
        cout << endl;
    }
}