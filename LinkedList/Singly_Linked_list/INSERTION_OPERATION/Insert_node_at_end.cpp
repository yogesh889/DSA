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

Node* insert_at_end(Node* head, int x){
    Node* curr = head;
    Node* newNode = new Node(x);

    if(head == nullptr){
        return newNode;
    }
    while(curr->next != nullptr){
        curr = curr->next;
    }
    curr->next = newNode;
    return head;
}

void print_linked_list(Node* head){
    Node* curr = head;
    while(curr != nullptr){
        cout<<curr->data<<" -> ";
        curr = curr->next;
    }
    cout<<"NULL";
}

int main(){

    // Node* head = new Node(10)
    Node* head;
    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    int x;
    cin>>x;

    head = insert_at_end(head, x);

    print_linked_list(head);


    return 0;
}