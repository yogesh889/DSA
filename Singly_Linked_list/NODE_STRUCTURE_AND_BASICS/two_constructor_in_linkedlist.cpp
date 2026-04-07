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

        Node(int data, Node* next){
            this->data = data;
            this->next = next;
        }
};

void printLinkedList(Node* newNode, Node* next){
    while(newNode != nullptr){
        cout<<newNode->data;
        newNode = newNode->next;
    }
}

int main(){

    Node* newNode = new Node(10); 
    Node* newNode = new Node(20); 
    Node* newNode = new Node(30); 

    printLinkedList(newNode, newNode->next);

    return 0;
}