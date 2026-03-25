// 2. Right-angled triangle:

// *
// * *
// * * * 
// * * * * 
// * * * * *  


#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    for(int i = 1; i <= n; i++) {

        // Print stars equal to row number
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }

        cout << endl;
    }
}