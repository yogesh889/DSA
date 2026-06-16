#include <iostream>
using namespace std;

class Queue {
    int arr[5];
    int front, rear;

public:
    Queue() {
        front = rear = -1;
    }

    void enqueue(int x) {

        if (rear == 4) {
            cout << "Overflow\n";
            return;
        }

        if (front == -1)
            front = 0;

        arr[++rear] = x;
    }

    void dequeue() {

        if (front == -1 || front > rear) {
            cout << "Underflow\n";
            return;
        }

        cout << "Deleted: " << arr[front++] << endl;
    }

    void display() {

        if (front == -1 || front > rear) {
            cout << "Queue Empty\n";
            return;
        }

        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";

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
}