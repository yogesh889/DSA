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
    //All nodes created in stack
    Node n1(10);
    Node n2(20);
    Node n3(30);
    Node n4(40);
    Node n5(50);

    //Linking Nodes
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = nullptr;

    //Head pointer (points to first node)
    Node* head = &n1;

    //Traversal
    Node* temp = head; //Using temp here to traverse without modifying the original head pointer
    while(temp != nullptr){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }

    cout<<"NULL";

    return 0;
}