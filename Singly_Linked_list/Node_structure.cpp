#include<iostream>
using namespace std;

class Node{
    public: 
        int data; //member variable
        Node* next; //member variable
    //constructor to initialize a new node with data
    Node(int data){
        // using (this->data = data) here because member variable and constructor paramenter have same naming 
        // and to avoid conflict between naming we have used this pointer
        this->data = data; 
        this->next = nullptr;
    }

    // Node(int data){
    //     data = data;  ===>>> this statement would simply assign parameter to itself, leaving the member varialbe uninitialized
    //     next = nullptr;
    // }
    // Node(int data){
    //     this->data = data;
    //     this->next = nullptr;
    // }
};



int main(){

    //create the first node (head of the list)
    Node* head = new Node(10);

    //link the second node
    head -> next = new Node(20);

    cout<<head->data<<endl;
    cout<<head->next->data<<endl;
    
    
    return 0;
}