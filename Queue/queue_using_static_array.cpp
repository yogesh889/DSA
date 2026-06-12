#include<iostream>
using namespace std;

class Queue {

    int arr[5];
    int front;
    int rear;

public:

    Queue() {
        front = 0;
        rear = -1;
    }

    void enqueue(int value) {

        if(rear == 4) {
            cout << "Queue Overflow\n";
            return;
        }

        rear++;
        arr[rear] = value;
    }

    void dequeue() {

        if(front > rear) {
            cout << "Queue Underflow\n";
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
};

int main() {

    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.dequeue();

    q.display();
}


// Major Problem in Static Queue

// Suppose:

// [10][20][30][40][50]

// Now dequeue 3 times:

// [ ][ ][ ][40][50]

// Rear reached end already.

// Cannot insert more even though empty spaces exist.

// This is called:

// False Overflow