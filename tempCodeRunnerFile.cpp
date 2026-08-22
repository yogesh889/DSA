#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int row = 1; row <= n; row++) {
        int mid = (row + 1) / 2;
        
        for(int k=1; k<n-row; k++){
            cout<<" ";
        }

        // Print increasing numbers
        for (int i = 1; i <= mid; i++) {
            cout << i <<" ";
        }

        // Print decreasing numbers
        if (row % 2 == 0) { // even row
            for (int i = mid; i >= 1; i--) {
                cout << i <<" ";
            }
            
            for(int k=1; k<n-row; k++){
                cout<<"  ";
            }
        } else { // odd row
            for (int i = mid - 1; i >= 1; i--) {
                cout << i <<" ";
            }
        }

        cout << endl;
    }

    return 0;
}