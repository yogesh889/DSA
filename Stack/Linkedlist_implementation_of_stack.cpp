#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class Stack {

    Node* top;

public:

    Stack() {
        top = nullptr;
    }

    void push(int x) {

        Node* newNode = new Node(x);

        newNode->next = top;

        top = newNode;
    }

    void pop() {

        if(top == nullptr) {
            cout << "Stack Underflow\n";
            return;
        }

        Node* temp = top;

        top = top->next;

        delete temp;
    }

    int peek() {

        if(top == nullptr)
            return -1;

        return top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }
};

int main() {

    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.peek() << endl;   // 30

    st.pop();

    cout << st.peek() << endl;   // 20
}