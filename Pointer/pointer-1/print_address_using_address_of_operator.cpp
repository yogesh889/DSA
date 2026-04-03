#include <iostream>
using namespace std;

int main() {
    int num = 15;
    int* ptr = &num;

    cout << "Value pointed to by ptr: " << *ptr << endl;
    cout << "Address of num: " << &num << endl;

    return 0;
}