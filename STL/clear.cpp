#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {11, 23, 45, 9};

    // Remove all elements from the vector
    v.clear();


//     clear() destroys elements logically,
//     BUT memory capacity may still exist.
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;

    // Check if the vector is empty
    if (v.empty()) {
        cout << "Vector is Empty";
    }
    else {
        cout << "Vector is Not Empty";
    }
    return 0;
}