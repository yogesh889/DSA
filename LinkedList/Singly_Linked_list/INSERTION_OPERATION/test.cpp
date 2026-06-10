#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};

void insert_At_Head(Node* &head, Node* &tail, int val){

    Node* newNode = new Node(val);

    // Empty list
    if(head == nullptr){
        head = tail = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}

void insert_At_Tail(Node* &head, Node* &tail, int val){

    Node* newNode = new Node(val);

    // Empty list
    if(head == nullptr){
        head = tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void print(Node* head){

    while(head){
        cout << head->data << " ";
        head = head->next;
    }

    cout << endl;
}

void circular_Linked_List(Node* head, Node* tail){

    if(head == nullptr)
        return;

    tail->next = head;

    Node* temp = head;

    cout<<temp->data<<" -> ";
    temp = temp->next;
    while(temp != head){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<temp->data<<" -> ";

    // do{
    //     cout << temp->data << " -> ";
    //     temp = temp->next;
    // }
    // while(temp != head);

    // cout << "(back to head)" << endl;
}

int main(){

    Node* head = nullptr;
    Node* tail = nullptr;

    insert_At_Head(head, tail, 10);
    insert_At_Head(head, tail, 20);
    insert_At_Head(head, tail, 30);

    insert_At_Tail(head, tail, 40);
    insert_At_Tail(head, tail, 50);
    insert_At_Tail(head, tail, 60);
    print(head);

    cout<<endl;

    circular_Linked_List(head, tail);

    

    return 0;
}