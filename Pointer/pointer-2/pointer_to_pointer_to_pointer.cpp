#include <iostream>
using namespace std;

int main() {
    int a = 5;

    int* ptr1 = &a;
    int** ptr2 = &ptr1;
    int*** ptr3 = &ptr2;

    ***ptr3 = 100;

    cout << "Value of a: " << a << endl;

    return 0;
}