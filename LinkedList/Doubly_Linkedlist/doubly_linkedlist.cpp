#include<iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node* next;
        Node* prev;
        Node(int a){
            data = a;
            next = nullptr;
            prev = nullptr;
        }
};

void printForward(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void printBackward(Node* head) {

    if(head == NULL)
        return;

    Node* tail = head;

    while(tail->next != NULL) {
        tail = tail->next;
    }

    while(tail != NULL) {
        cout << tail->data << " ";
        tail = tail->prev;
    }

    cout << endl;
}

void insertAtHead(Node* &head, int value) {

    Node* newNode = new Node(value);

    if(head == NULL) {
        head = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;

    head = newNode;
}

void insertAtTail(Node* &head, int value) {

    Node* newNode = new Node(value);

    if(head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

void insertAtPosition(Node* &head, int pos, int value) {

    if(pos == 1) {
        insertAtHead(head, value);
        return;
    }

    Node* temp = head;

    for(int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if(temp == NULL)
        return;

    Node* newNode = new Node(value);

    newNode->next = temp->next;
    newNode->prev = temp;

    if(temp->next != NULL)
        temp->next->prev = newNode;

    temp->next = newNode;
}

void deleteHead(Node* &head) {

    if(head == NULL)
        return;

    Node* temp = head;

    head = head->next;

    if(head != NULL)
        head->prev = NULL;

    delete temp;
}

void deleteTail(Node* &head) {

    if(head == NULL)
        return;

    if(head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->prev->next = NULL;

    delete temp;
}

void deleteAtPosition(Node* &head, int pos) {

    if(head == NULL)
        return;

    if(pos == 1) {
        deleteHead(head);
        return;
    }

    Node* temp = head;

    for(int i = 1; i < pos && temp != NULL; i++) {
        temp = temp->next;
    }

    if(temp == NULL)
        return;

    if(temp->next != NULL)
        temp->next->prev = temp->prev;

    if(temp->prev != NULL)
        temp->prev->next = temp->next;

    delete temp;
}

bool search(Node* head, int key) {

    Node* temp = head;

    while(temp != NULL) {

        if(temp->data == key)
            return true;

        temp = temp->next;
    }

    return false;
}

int main() {

    Node* head = NULL;

    insertAtHead(head, 20);
    insertAtHead(head, 10);

    insertAtTail(head, 30);
    insertAtTail(head, 40);

    cout << "Forward: ";
    printForward(head);

    cout << "Backward: ";
    printBackward(head);

    insertAtPosition(head, 3, 25);

    cout << "After Insert: ";
    printForward(head);

    deleteAtPosition(head, 2);

    cout << "After Delete: ";
    printForward(head);

    if(search(head, 30))
        cout << "Found";
    else
        cout << "Not Found";

    return 0;
}