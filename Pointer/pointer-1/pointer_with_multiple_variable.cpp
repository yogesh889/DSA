#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 2, c = 3;

    int* ptr = &a;
    cout << *ptr << endl;

    ptr = &b;
    cout << *ptr << endl;

    ptr = &c;
    cout << *ptr << endl;

    return 0;
}