#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;

    int* ptr1 = &a;
    int* ptr2 = &b;

    if (ptr1 == ptr2)
        cout << "Equal";
    else
        cout << "Not Equal";

    return 0;
}

// Different variables → different addresses