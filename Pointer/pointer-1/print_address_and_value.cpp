#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int* ptr = &a;

    cout << "Address: " << ptr << ", Value: " << *ptr << endl;

    return 0;
}