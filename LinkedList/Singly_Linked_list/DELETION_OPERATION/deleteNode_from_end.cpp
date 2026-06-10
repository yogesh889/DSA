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

Node* delete_node_from_end(Node* head){
    Node* temp = head;

    // If no node is present
    if(head == nullptr){
        return nullptr;
    }

    // If only one node is present
    if(head->next == nullptr){
        delete head;
        return nullptr;
    }
    while(temp->next->next != nullptr){
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;
    return head;
}

void print_linked_list(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL";
}


int main(){

    Node* head;
    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    head = delete_node_from_end(head);

    print_linked_list(head);

    return 0;
}