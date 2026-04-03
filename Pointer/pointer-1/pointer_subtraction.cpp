#include <iostream>
using namespace std;

int main() {
    int x = 10, y = 20;

    int* ptr1 = &x;
    int* ptr2 = &y;

    cout << "Difference: " << ptr2 - ptr1 << endl;

    return 0;
}

// Gives number of elements between addresses (not bytes)