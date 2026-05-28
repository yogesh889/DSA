#include<iostream>
#include<vector>
using namespace std;

class Queue {

    vector<int> v;

public:

    void enqueue(int value) {
        v.push_back(value);
    }

    void dequeue() {

        if(v.empty()) {
            cout << "Underflow\n";
            return;
        }

        v.erase(v.begin());
    }

    int getFront() {

        if(v.empty()) {
            return -1;
        }

        return v.front();
    }

    void display() {

        for(int x : v) {
            cout << x << " ";
        }
    }
};

int main() {

    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.dequeue();

    q.display();
}