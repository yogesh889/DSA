// 16. Sequence pattern:

//  1
//  2 3
//  3 4 5
//  4 5 6 7 
//  5 6 7 8 9


#include <iostream>
using namespace std;

int main() {
    int n;  // total number of rows
    cin>>n;

    // outer loop → controls rows from 1 to n
    for (int i = 1; i <= n; i++) {

        int num = i;  // starting number for current row

        // inner loop → prints i numbers in sequence starting from i
        for (int j = 1; j <= i; j++) {
            cout << num << " ";  // print current number
            num++;               // move to next number
        }

        cout << endl;  // move to next line after each row
    }

    return 0;  // end of program
}
