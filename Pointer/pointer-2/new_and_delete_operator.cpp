#include <iostream>
using namespace std;

int main() {
    int* ptr = new int; // allocate memory

    *ptr = 20;

    cout << *ptr << endl;

    delete ptr; // free memory

    return 0;
}