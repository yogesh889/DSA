//10.  Sum of series: Compute the sum of the series 1 + 1 / 2 + 1 / 3 + . . . + 1 / 𝑁.

#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    cout << sum;
    return 0;
}