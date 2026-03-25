//7. Find the LCM: Compute the least common multiple (LCM) of two numbers using loops.

#include <iostream>
using namespace std;

int main() {
    int a, b, lcm;
    cin >> a >> b;

    int maxVal = (a > b) ? a : b;

    for(int i = maxVal; ; i++) {
        if(i % a == 0 && i % b == 0) {
            lcm = i;
            break;
        }
    }

    cout << lcm;
    return 0;
}