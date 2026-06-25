#include <iostream>
#include <vector>
using namespace std;

class MyCircularDeque {
    vector<int> dq;
    int front, rear;
    int size;
    int count;

public:
    MyCircularDeque(int k) {
        size = k;
        dq.resize(k);

        front = 0;
        rear = k - 1;
        count = 0;
    }

    bool insertFront(int value) {
        if (isFull()) {
            return false;
        }

        front = (front - 1 + size) % size;
        dq[front] = value;
        count++;

        return true;
    }

    bool insertLast(int value) {
        if (isFull()) {
            return false;
        }

        rear = (rear + 1) % size;
        dq[rear] = value;
        count++;

        return true;
    }

    bool deleteFront() {
        if (isEmpty()) {
            return false;
        }

        front = (front + 1) % size;
        count--;

        return true;
    }

    bool deleteLast() {
        if (isEmpty()) {
            return false;
        }

        rear = (rear - 1 + size) % size;
        count--;

        return true;
    }

    int getFront() {
        if (isEmpty()) {
            return -1;
        }

        return dq[front];
    }

    int getRear() {
        if (isEmpty()) {
            return -1;
        }

        return dq[rear];
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == size;
    }
};

int main() {
    MyCircularDeque dq(3);

    cout << boolalpha;

    cout << "insertLast(1): " << dq.insertLast(1) << endl;
    cout << "insertLast(2): " << dq.insertLast(2) << endl;
    cout << "insertFront(3): " << dq.insertFront(3) << endl;

    cout << "Front: " << dq.getFront() << endl;
    cout << "Rear: " << dq.getRear() << endl;

    cout << "isFull(): " << dq.isFull() << endl;

    cout << "deleteLast(): " << dq.deleteLast() << endl;

    cout << "Rear after deletion: " << dq.getRear() << endl;

    cout << "insertFront(4): " << dq.insertFront(4) << endl;

    cout << "Front: " << dq.getFront() << endl;
    cout << "Rear: " << dq.getRear() << endl;

    return 0;
}