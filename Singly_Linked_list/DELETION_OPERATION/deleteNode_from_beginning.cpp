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

Node* delete_from_beginning(Node* head){

    //edge case if head 
    if(head == nullptr){
        return nullptr;
    }
    
    Node* curr = head;
    head = head->next;
    delete curr;
    return head;
}

void print_linked_list(Node* head){
    Node* curr = head;
    while(curr != nullptr){
        cout<<curr->data;
        if(curr->next == nullptr){
            cout<<" -> ";
        }
        curr = curr->next;
    }
    cout<<"NULL";
}

int main(){

    Node* head; // head is not guranteed to be nullptr, it's just some random value
    // head = new Node(10);
    // head->next = new Node(20);
    // head->next->next = new Node(30);
    // head->next->next->next = new Node(40);
    // head->next->next->next->next = new Node(50);

    head = delete_from_beginning(head);

    print_linked_list(head);

    return 0;
}