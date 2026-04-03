#include <iostream>
using namespace std;

int main() {
    int x = 10;

    int* ptr1 = &x;     // pointer to x
    int** ptr2 = &ptr1; // pointer to ptr1

    **ptr2 = 50; // modifying x using ptr2

    cout << "Value of x: " << x << endl;

    return 0;
}