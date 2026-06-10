#include <iostream>
using namespace std;

#define SIZE 4 // Maximum capacity of the queue

class LinearQueue {
private:
    string items[SIZE];
    int front;
    int rear;

public:
    LinearQueue() {
        front = -1;
        rear = -1;
    }

    // Check if the queue is full
    bool isFull() {
        if (rear == SIZE - 1) {
            return true;
        }
        return false;
    }

    // Add an element to the rear
    void enqueue(string element) {
        if (isFull()) {
            cout << "❌ Cannot add " << element << ". Error: Queue Overflow (Full)!\n";
            return;
        }
        if (front == -1) front = 0;
        rear++;
        items[rear] = element;
        cout << "➕ Enqueued: " << element << " at Index " << rear << "\n";
    }

    // Remove an element from the front
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue is Empty\n";
            return;
        }
        cout << "➖ Dequeued (Deleted): " << items[front] << " from Index " << front << "\n";
        front++; // The space behind this pointer is now abandoned
    }

    // Display current status of the queue
    void displayStatus() {
        cout << "\n--- Current Memory Status --- \n[ ";
        for (int i = 0; i < SIZE; i++) {
            if (i < front || i > rear) {
                cout << "Empty ";
            } else {
                cout << items[i] << " ";
            }
        }
        cout << "]\n";
        cout << "Front Index: " << front << ", Rear Index: " << rear << "\n";
        cout << "-----------------------------\n\n";
    }
};

int main() {
    LinearQueue q;

    // 1. Fill the queue to capacity
    q.enqueue("Task A");
    q.enqueue("Task B");
    q.enqueue("Task C");
    q.enqueue("Task D");
    q.displayStatus();

    // 2. Delete two tasks (creates empty spaces at Index 0 and Index 1)
    q.dequeue();
    q.dequeue();
    q.displayStatus();

    // 3. Try to add a new task. 
    // This will FAIL even though indices 0 and 1 are empty.
    q.enqueue("Task E");

    return 0;
}
