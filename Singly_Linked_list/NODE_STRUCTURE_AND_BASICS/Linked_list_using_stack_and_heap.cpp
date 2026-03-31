#include<iostream>
using namespace std;

class Node{
    // we have to use public access specifier here otherwise object will not able to assign value to data member
    public: 
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = nullptr;
        }
};

int main(){

    //eg: 
    // data = 10;
    // next = 1000 (address of heap node)

    Node head(10); //only this will store in stack, remaining Node will store in heap
    head.next = new Node(20); //head.next is a pointer, . to access object
    head.next->next = new Node(30);
    head.next->next->next = new Node(40);

    Node*temp = head.next;

    while(temp != nullptr){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL";



    return 0;
}