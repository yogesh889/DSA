#include<iostream>
using namespace std;

class DynamicQueue {

    int* arr;
    int front;
    int rear;
    int capacity;

public:

    DynamicQueue() {

        capacity = 2;

        arr = new int[capacity];

        front = 0;
        rear = -1;
    }

    void enqueue(int value) {

        if(rear == capacity - 1) {

            int* newArr =
                new int[capacity * 2];

            for(int i=front; i<=rear; i++) {
                newArr[i-front] = arr[i];
            }

            rear = rear - front;
            front = 0;

            delete[] arr;

            arr = newArr;

            capacity *= 2;
        }

        rear++;

        arr[rear] = value;
    }

    void dequeue() {

        if(front > rear) {
            cout << "Underflow\n";
            return;
        }

        front++;
    }

    int getFront() {

        if(front > rear) {
            return -1;
        }

        return arr[front];
    }

    void display() {

        for(int i=front; i<=rear; i++) {
            cout << arr[i] << " ";
        }
    }

    ~DynamicQueue() {
        delete[] arr;
    }
};

int main() {

    DynamicQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();
}