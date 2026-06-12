#include<iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node* next;
        Node* prev;
        Node(int val){
            data = val;
            next = nullptr;
            prev = nullptr;
        }

};

void insertAtHead(Node* &head, int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;

    head = newNode;
}

void insertAtTail(Node* &head, int val){
    Node* newNode = new Node(val);

    if(head == nullptr){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

void insertAtPosition(Node* &head, int pos, int val){
    if(pos == 1){
        insertAtHead(head, val);
        return;
    }

    Node* temp = head;

    for(int i=1; i<pos-1 && temp!=nullptr; i++){
        temp = temp->next;
    }

    if(temp == nullptr){
        return;
    }

    Node* newNode = new Node(val);

    newNode->next = temp->next;
    newNode->prev = temp;

    if(temp->next != nullptr){
        temp->next->prev = newNode;
    }
    temp->next = newNode;
}

void deleteAtHead(Node* &head){
    cout<<"Delete Head"<<endl;
    if(head == nullptr){
        return;
    }
    head = head->next;
    if(head != nullptr){
        head->prev = nullptr;
    }
}

void deleteAtTail(Node* &head){
    cout<<"Delete at tail"<<endl;
    Node* temp = head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    temp->next = nullptr;

}

void deleteAtSpecificPosition(Node* &head, int pos){
    if(head == nullptr){
        return;
    }
    Node* temp = head;
    for(int i=1; i<pos-1 && temp!=nullptr; i++){
        temp = temp->next;
    }
    temp->next = temp->next->next;
    temp->next->prev = temp;
}

void forwardTraverse(Node* head){
    cout<<"Forward Traverse: ";
    Node* temp = head;

    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void backwardTraverse(Node* head){
    if(head == nullptr){
        return;
    }

    cout<<"Backward Traverse: ";

    Node* tail = head;
    while(tail->next != nullptr){
        tail = tail->next;
    }

    while(tail != nullptr){
        cout<<tail->data<<" ";
        tail = tail->prev;
    }
    cout<<endl;
}

int main(){
    Node* head = nullptr;

    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);

    forwardTraverse(head);
    backwardTraverse(head);

    insertAtTail(head, 50);
    insertAtTail(head, 60);
    insertAtTail(head, 70);

    forwardTraverse(head);
    backwardTraverse(head);

    insertAtPosition(head, 3, 33);

    forwardTraverse(head);
    backwardTraverse(head);

    deleteAtHead(head);

    forwardTraverse(head);
    backwardTraverse(head);

    deleteAtTail(head);

    forwardTraverse(head);
    backwardTraverse(head);

    deleteAtSpecificPosition(head, 4);

    forwardTraverse(head);
    backwardTraverse(head);

    return 0;
}