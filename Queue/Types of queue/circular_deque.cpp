#include <iostream>
#include <vector>
using namespace std;

class CircularDeque {
    vector<int> dq;
    int front, rear;
    int size;
    int count;

public:
    CircularDeque(int k) {
        size = k;
        dq.resize(k);

        front = 0;
        rear = k - 1;
        count = 0;
    }

    bool insertFront(int val) {
        if (count == size)
            return false;

        front = (front - 1 + size) % size;
        dq[front] = val;
        count++;

        return true;
    }

    bool insertBack(int val) {
        if (count == size)
            return false;

        rear = (rear + 1) % size;
        dq[rear] = val;
        count++;

        return true;
    }

    bool deleteFront() {
        if (count == 0)
            return false;

        front = (front + 1) % size;
        count--;

        return true;
    }

    bool deleteBack() {
        if (count == 0)
            return false;

        rear = (rear - 1 + size) % size;
        count--;

        return true;
    }

    void display() {
        if (count == 0) {
            cout << "Deque Empty\n";
            return;
        }

        int idx = front;

        for (int i = 0; i < count; i++) {
            cout << dq[idx] << " ";
            idx = (idx + 1) % size;
        }

        cout << endl;
    }
};

int main() {
    CircularDeque dq(5);

    dq.insertBack(10);
    dq.insertBack(20);
    dq.insertFront(5);
    dq.insertFront(1);
    dq.insertFront(2);
    dq.insertFront(6);

    dq.display();

    dq.deleteFront();
    dq.deleteBack();

    dq.display();
}