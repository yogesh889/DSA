#include<iostream>
using namespace std;

class Node {

public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class Queue {

    Node* front;
    Node* rear;

public:

    Queue() {
        front = rear = NULL;
    }

    void enqueue(int value) {

        Node* newNode =
            new Node(value);

        if(rear == NULL) {
            front = rear = newNode;
            return;
        }

        rear->next = newNode;
        rear = newNode;
    }

    void dequeue() {

        if(front == NULL) {
            cout << "Underflow\n";
            return;
        }

        Node* temp = front;

        front = front->next;

        delete temp;

        if(front == NULL) {
            rear = NULL;
        }
    }

    int getFront() {

        if(front == NULL) {
            return -1;
        }

        return front->data;
    }

    void display() {

        Node* temp = front;

        while(temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main() {

    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();
}