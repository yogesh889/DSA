#include <bits/stdc++.h>
using namespace std;

int main() {

    // Array of 5 linked lists
    list<int> table[5];

    table[0].push_back(20);
    table[0].push_back(30);
    table[0].push_back(40);
    table[0].push_back(50);

    table[1].push_back(10);
    table[1].push_back(15);

    table[2].push_back(25);

    // Display
    for(int i = 0; i < 5; i++) {

        cout << i << " -> ";

        for(int x : table[i]) {
            cout << x << " -> ";
        }

        cout << "NULL" << endl;
    }

    return 0;
}