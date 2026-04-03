#include <iostream>
using namespace std;

int main() {
    int arr[3] = {10, 20, 30};
    int* ptr = arr;

    cout << *ptr << endl;       // 10
    cout << *(ptr + 1) << endl; // 20
    cout << *(ptr + 2) << endl; // 30

    ptr = ptr + 2;
    cout << *ptr << endl;       // 30

    ptr = ptr - 1;
    cout << *ptr << endl;       // 20

    return 0;
}