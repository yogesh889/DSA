#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;

    *ptr = 20;

    cout << "New value of a: " << a << endl;

    return 0;
}