//9. Find GCD (Greatest Common Divisor): Use a loop to compute the GCD of two numbers A and 𝐵.

#include <iostream>
using namespace std;

int main() {
    int a, b, gcd = 1;
    cin >> a >> b;

    for(int i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0){
            gcd = i;
        }
    }

    cout << gcd;
    return 0;
}