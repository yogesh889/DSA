#include <iostream>
using namespace std;

class CircularQueue {

    int *arr;
    int front, rear, size;

public:

    CircularQueue(int n) {
        size = n;
        arr = new int[size];

        front = rear = -1;
    }

    void enqueue(int x) {

        if ((rear + 1) % size == front) {
            cout << "Queue Full\n";
            return;
        }

        if (front == -1) {
            front = rear = 0;
        }
        else {
            rear = (rear + 1) % size;
        }

        arr[rear] = x;
    }

    void dequeue() {

        if (front == -1) {
            cout << "Queue Empty\n";
            return;
        }

        cout << "Deleted: " << arr[front] << endl;

        if (front == rear) {
            front = rear = -1;
        }
        else {
            front = (front + 1) % size;
        }
    }

    void display() {

        if (front == -1) {
            cout << "Queue Empty\n";
            return;
        }

        int i = front;

        while (true) {

            cout << arr[i] << " ";

            if (i == rear)
                break;

            i = (i + 1) % size;
        }

        cout << endl;
    }
};

int main() {

    CircularQueue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();

    q.display();
}