#include<iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node* prev;
        Node* next;

        Node(int data){
            //stores data of the node
            this->data = data;
            //pointer to previous node
            this->prev = nullptr;
            //pointer to next node
            this->next = nullptr;
        }

        Node(int data, Node* prev, Node* next){
            this->data = data;
            this->prev = prev;
            this->next = next;
        }
};

void print_linked_list(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data;
        if(temp->next != nullptr){
            cout<<" <-> ";
        }
        temp = temp->next;
    }
}

int main(){

    Node* head;
    head = new Node(10);
    head->next = new Node(20);
    head->next->prev = head;
    head->next->next = new Node(30);
    head->next->next->prev = head->next;
    head->next->next->next = new Node(30);
    head->next->next->next->prev = head->next;
    
    print_linked_list(head);

    return 0;
}