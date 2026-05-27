#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v = {1,5,8};

    v.emplace(v.begin() + 2, 6);

    v.emplace_back(7);

    for(auto i : v)
        cout << i << " ";
}