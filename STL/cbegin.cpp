// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {

//     vector<int> v = {1,2,3};

    
//     auto it = v.cbegin();

//     *it = 100; // ERROR
// }

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v = {1,2,3};

    auto it = v.begin();

    *it = 100;

    cout << v[0];
}