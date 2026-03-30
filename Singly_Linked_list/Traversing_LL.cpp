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

    // Node* head;
    // head = new Node(10);
    // //Link the second node
    // head->next = new Node(20);
    // //Link the third node
    // head->next->next = new Node(30);
    // //Link the fourth node
    // head->next->next->next = new Node(40);

    Node* head = new Node(10);
    Node* temp = head;

    delete head;

    cout << temp->data;


    // data, address   ===>    10, 1001  -->  20, 2002 -->  30, 3003  -->  40, nullptr 
    // while(head != nullptr){
    //     cout<<head->data<<endl;
    //     head = head->next;
    // }



    return 0;
}