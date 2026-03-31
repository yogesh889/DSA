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

Node* insert_at_specific_position(int p, int v, Node* head){

    Node* newNode = new Node(v);

    // Case 1: Insert at beginning
    if(p == 1){
        newNode->next = head;
        return newNode;
    }

    Node* curr = head;
    int it = 1;

    // Stop at (p-1)
    while(it < p - 1 && curr != nullptr){
        curr = curr->next;
        it++;
    }

    // Safety check
    if(curr == nullptr){
        cout << "Position out of range";
        return head;
    }

    newNode->next = curr->next;
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

    Node* head;

    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    int position, value;
    cin>>position>>value;

    head = insert_at_specific_position(position, value, head);

    print_linked_list(head);

    return 0;
}