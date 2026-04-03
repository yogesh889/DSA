#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;
    int* ptr = &a;

    b = *ptr + b;

    cout << "b = " << b << endl; // 15

    return 0;
}