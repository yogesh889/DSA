#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class CircularQueue {
private:
    Node* front;
    Node* rear;

public:
    CircularQueue() {
        front = rear = NULL;
    }

    // ➕ Enqueue
    void enqueue(int val) {
        Node* newNode = new Node(val);

        // Case 1: Empty queue
        if (front == NULL) {
            front = rear = newNode;
            rear->next = front;  // circular link
        }
        else {
            rear->next = newNode;
            rear = newNode;
            rear->next = front;  // maintain circle
        }

        cout << val << " inserted\n";
    }

    // ➖ Dequeue
    void dequeue() {
        if (front == NULL) {
            cout << "Queue Underflow\n";
            return;
        }

        // Case 1: Only one node
        if (front == rear) {
            cout << front->data << " deleted\n";
            delete front;
            front = rear = NULL;
        }
        else {
            Node* temp = front;
            cout << front->data << " deleted\n";
            front = front->next;
            rear->next = front;  // maintain circle
            delete temp;
        }
    }

    // 👀 Display
    void display() {
        if (front == NULL) {
            cout << "Queue is empty\n";
            return;
        }

        Node* temp = front;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != front);

        cout << endl;
    }
};

int main() {
    CircularQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();
    q.display();

    return 0;
}