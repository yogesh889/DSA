#include <iostream>
#include <deque>
using namespace std;

int main() {

    deque<int> dq;

    dq.push_back(20);
    dq.push_back(30);

    dq.push_front(10);

    cout << "Deque: ";

    for (auto x : dq)
        cout << x << " ";

    cout << endl;

    dq.pop_front();

    cout << "After Front Delete: ";

    for (auto x : dq)
        cout << x << " ";

    cout << endl;

    dq.pop_back();

    cout << "After Rear Delete: ";

    for (auto x : dq)
        cout << x << " ";

    cout << endl;
}