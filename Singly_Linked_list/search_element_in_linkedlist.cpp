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

void search_element_in_linkedlist(Node* head, int x){
    Node* temp = head;
    int place = 1;
    // If linkedlist is null
    if(head == nullptr){
        cout<<"NULL";
    }

    // check till last element
    while(temp->next != nullptr){
        // If any element matches then just return  
        if(temp->data == x){
            cout<<"place: "<<place;
            return; // return controls function flow
            // exit the function immediately - don't execute anything further
            // found ==> print + EXIT FUNCTION
        }
        temp = temp->next; 
        place++;
    }
    
    // If number not found
    cout<<"invalid number";

};

int main(){

    Node* head;
    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    int x;
    cin>>x;

    search_element_in_linkedlist(head, x);

    return 0;
}