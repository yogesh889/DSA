// 7. Floyd's triangle:

//  1
//  2 3
//  4 5 6
//  7 8 9 10

#include <iostream>
using namespace std;

int main() {
    int n;      // total number of rows
    cin>>n;
    
    int num = 1;    // starting number for Floyd's triangle

    // outer loop → controls rows from 1 to n
    for (int i = 1; i <= n; i++) {

        // inner loop → prints i numbers in each row
        for (int j = 1; j <= i; j++) {
            cout << num << " ";  // print current number
            num++;               // increment number for next position
        }

        cout << endl;  // move to next line after each row
    }

    return 0;  // end of program
}