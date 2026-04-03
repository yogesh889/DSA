#include <iostream>
using namespace std;

int main() {
    char ch = 'A';
    char* ptr = &ch;

    cout << "Before: " << (void*)ptr << endl;

    ptr++;

    cout << "After: " << (void*)ptr << endl;
    cout << "Value of ch: " << ch << endl;

    return 0;
}

// Char pointer moves by 1 byte