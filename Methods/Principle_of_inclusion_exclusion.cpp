#include <iostream>
#include <set>
using namespace std;

int main() {

    set<int> A = {1, 2, 3, 4};
    set<int> B = {3, 4, 5, 6};

    int intersection = 0;

    for(int x : A) {
        if(B.count(x)) {
            intersection++;
        }
    }

    int result = A.size() + B.size() - intersection;

    cout << result;

    return 0;
}