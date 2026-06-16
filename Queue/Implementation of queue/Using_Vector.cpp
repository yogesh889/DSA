#include <iostream>
#include <vector>
using namespace std;

class Queue {
    vector<int> v;

public:

    void enqueue(int x) {
        v.push_back(x);
    }

    void dequeue() {

        if (v.empty()) {
            cout << "Queue Empty\n";
            return;
        }

        cout << "Deleted: " << v.front() << endl;

        v.erase(v.begin());
    }

    void display() {

        if (v.empty()) {
            cout << "Queue Empty\n";
            return;
        }

        for (int x : v)
            cout << x << " ";

        cout << endl;
    }
};

int main() {

    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();

    q.display();

    return 0;
}