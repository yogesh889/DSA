#include<iostream>
using namespace std;

//we have created class, in which we have defined data and next pointer and consctructor which takes value whenever object is created
class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = nullptr;
        }
};

//I have used Node* here because is will return newNode which is pointer
Node* insert_At_Front(Node* head, int x){
    Node* newNode = new Node(x);
    // 5,1001(newNode)   --->   10,3001
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
    // In the below function we have get the newNode and here we have point head towards newNode
    // insert_at_front ==> will return value 5, 1001
    head = insert_At_Front(head, x); // head = 5, 1001 ==> now here head is pointing to new node

    print_linked_list(head);

    return 0;
}