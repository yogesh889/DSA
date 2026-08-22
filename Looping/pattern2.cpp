#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int row = 1; row <= n; row++) {
        int mid = (row + 1) / 2;

        for(int k=1; k<=n-row; k++){
            cout<<" ";
        }

        // Increasing characters
        for (int i = 0; i < mid; i++) {
            cout << char('A' + i) <<" ";
        }

        // Decreasing characters
        if (row % 2 == 0) { // even row
            for (int i = mid - 1; i >= 0; i--) {
                cout << char('A' + i) <<" ";
            }
        } else { // odd row
            for (int i = mid - 2; i >= 0; i--) {
                cout << char('A' + i) <<" ";
            }
        }

        cout << endl;
    }

    return 0;
}