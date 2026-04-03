#include <iostream>
using namespace std;

void byValue(int a, int b) {
    a = 15;
}

void byReference(int &a, int &b) {
    a = 15;
}

void byAddress(int* a, int* b) {
    *a = 25;
}

int main() {
    int a = 5, b = 10;

    byValue(a, b);
    cout << "Pass by Value: a = " << a << ", b = " << b << endl;

    byReference(a, b);
    cout << "Pass by Reference: a = " << a << ", b = " << b << endl;

    byAddress(&a, &b);
    cout << "Pass by Address: a = " << a << ", b = " << b << endl;

    return 0;
}