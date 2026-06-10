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

Node* delete_from_specific_position(Node* head, int x){
    // If no node is present
    if(head == nullptr){
        return nullptr;
    }

    // If only one node is present
    if(head->next == nullptr){
        delete head;
        return nullptr;
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt < x-1 && temp->next != nullptr){
        temp = temp->next;
        cnt++;
    }

    // If position invalid
    if(temp->next == nullptr){
        return head;
    }

    // Node to delete
    temp->next = temp->next->next;
    temp->next->next = nullptr;
    return head;
}

void print_linked_list(Node* head){
    while(head != nullptr){
        cout<<head->data<<" -> ";
        head = head->next;
    }
    cout<<"NULL";
}

int main(){

    Node* head;
    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    int x;
    cin>>x;

    head = delete_from_specific_position(head, x);

    print_linked_list(head);

    return 0;
}