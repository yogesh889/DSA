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

int main(){
    //create the first node head of the list

    // Node head(50);
    // head->next(50);

    Node* head;
    head = new Node(10);
    //Link the second node
    head->next = new Node(20);
    //Link the third node
    head->next->next = new Node(30);
    //Link the fourth node
    head->next->next->next = new Node(40);



    //THIS WILL NOT WORK BECAUSE 
    // Node* head = new Node(10);
    // Node* temp = head;

    // head -> 1000(address)
    // temp -> 1000(address)
    // delete head;
    // memory at 1000 is freed;
    // but pointer sill hold address 1000;

    // cout << temp->data;


    Node* temp = head;
    // data, address   ===>    10, 1001  -->  20, 2002 -->  30, 3003  -->  40, nullptr 
    while(temp != nullptr){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL";


    return 0;
}