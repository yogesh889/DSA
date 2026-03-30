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

Node* insert_At_Front(Node* head, int x){
    Node* newNode = new Node(x);
    // 5,1001   --->   10,3001
    newNode->next = head;
    return newNode;
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
    //previously head is pointing to 10

    int x;
    cin>>x;

    // but now head is pointing to newNode
    // head --> 5, 1001  -->  10, 3001
    head = insert_At_Front(head, x);

    print_linked_list(head);

    return 0;
}