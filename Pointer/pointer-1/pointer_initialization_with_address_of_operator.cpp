#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int* ptr = &num;

    cout << "Value pointed to by ptr: " << *ptr << endl;

    return 0;
}