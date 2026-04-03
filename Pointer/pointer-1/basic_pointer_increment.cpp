#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* ptr = &x;

    cout << "Before: " << ptr << endl;

    ptr++;  // moves to next int location

    cout << "After: " << ptr << endl;
    cout << "Value of x: " << x << endl;

    return 0;
}