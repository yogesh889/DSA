// 11. Hollow Alphabet Square Pattern : 

// A A A A A
// A       A
// A       A
// A       A
// A A A A A


#include <iostream>
using namespace std;

int main() {
    int n;

    cin>>n;

    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= n; j++) {

            // Border only
            if(i == 1 || i == n || j == 1 || j == n)
                cout << "A ";
            else
                cout << "  ";
        }

        cout << endl;
    }
}