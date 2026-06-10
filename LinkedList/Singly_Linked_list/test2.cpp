#include<iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = nullptr;
        }
};

Node* insert_at_specific_position(int value, int pos, Node* head){
    Node* newNode = new Node(value);

    if(pos == 1){
        newNode->next = head;
        return newNode;
    }

    Node* temp = head;

    // traversing using loop
    for(int i=1; i<pos-1 && temp!=nullptr; i++){
        temp = temp->next;
    }

    if(temp == nullptr){
        cout<<"Invalid position";
        return head;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

int main(){
    Node* head;
    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    Node* tail;
    tail = head;

    while(tail != nullptr){
        cout<<tail->data<<" -> ";
        tail = tail->next;
    }
    cout<<"NULL";

    cout<<endl;

    int x, pos;
    cin>>pos;
    cin>>x;


    head = insert_at_specific_position(x, pos, head);

    Node* temp2;
    temp2 = head;
    while(temp2 != nullptr){
        cout<<temp2->data<<" -> ";
        temp2 = temp2->next;
    }
    cout<<"NULL";

    return 0;
}