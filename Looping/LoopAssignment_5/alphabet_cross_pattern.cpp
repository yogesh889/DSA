// 10. Alphabet Cross Pattern :
// 1 2 3 
// | | |
// A   A ------- 1
//  B B -------- 2
//   C --------- 3
//  B B -------- 4
// A   A ------- 5


#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < n; j++) {

            if(j == i || j == n - i - 1)
                cout << char('A' + i);
            else
                cout << " ";
        }

        cout << endl;
    }
}