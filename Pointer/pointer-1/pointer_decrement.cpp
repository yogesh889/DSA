#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* ptr = &x;

    ptr--;

    cout << "Pointer: " << ptr << endl;
    cout << "Value of x: " << x << endl;

    return 0;
}

//⚠️ Same warning: unsafe memory access