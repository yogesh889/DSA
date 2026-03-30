#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Node(int data) {
    //     this->data = data;
    //     this->next = nullptr;
    // }
    Node(int value){
        data = value;
        next = nullptr;
    }
};

int main() {

    // All nodes created in stack
    Node n1(10);
    Node n2(20);
    Node n3(30);
    Node n4(40);

    // Linking nodes
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = nullptr;

    // Head pointer (points to first node)
    Node* head = &n1;

    // Traversal
    Node* temp = head;
    while(temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";

    return 0;
}