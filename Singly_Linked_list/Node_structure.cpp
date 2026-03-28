#include<iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node* next;

    //constructor to initialize a new node wiht data
    Node(int new_data){
        this->data = new_data;
        this->next = nullptr;
    }
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