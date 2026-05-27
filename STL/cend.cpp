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

    // auto it = v.cend();

    // *it = 100;

    // cout << v[0];

    for(auto it = v.cbegin(); it != v.cend(); it++){
        // *it = 5;
        cout << *it << " ";
    }
    cout<<endl;
    for(auto it = v.begin(); it != v.end(); it++){
        *it = 5;
        cout << *it << " ";
    }
}