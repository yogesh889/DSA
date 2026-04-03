#include <iostream>
using namespace std;

// Important concept: You should NOT increment pointer for single variable

int main() {
    int num = 10;
    int* ptr = &num;

    *ptr = 20;

    cout << "num: " << num << endl;

    return 0;
}

// Incrementing pointer here = wrong memory access