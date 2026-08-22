#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 3;

    for(int mask = 1; mask < (1 << n); mask++) {

        int bits = 0;

        for(int i = 0; i < n; i++) {

            if(mask & (1 << i)) {
                bits++;
            }
        }

        cout << "mask = " << mask
             << ", selected = " << bits
             << endl;
    }

    return 0;
}