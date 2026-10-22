#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
        Node* prev;
        int val;
        Node* next;
        Node(int data){
            val = data;
            prev = nullptr;
            next = nullptr;
        }
};

class LinkedList{
    private: 
        Node* head = NULL;
    public: 
        void insertAtHead(int x){
            Node* newNode = new Node(x);
            if(head == NULL){
                head = newNode;
                return;
            }
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        void insertAtTail(int x){
            Node* newNode = new Node(x);
            if(head == nullptr){
                head = newNode;
                return;
            }
            Node* temp = head;
            while(temp->next != nullptr){
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }

        void insertAtPos(int pos, int val){
            if(pos == 1){
                insertAtHead(val);
                return;
            }
            Node* temp = head;
            for(int i=1; i<pos-1 && temp!=nullptr; i++){
                temp = temp->next;
            }
            if(temp == NULL){
                return;
            }
            Node* newNode = new Node(val);
            newNode->next = temp->next;
            newNode->prev = temp;
            if(temp->next != nullptr){
                temp->next->prev = newNode;
            }
            temp->next = newNode;
        }

        void printForward(){
            cout<<"PrintForward: ";
            Node* temp = head;
            while(temp!=NULL){
                cout<<temp->val<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }
        void printBackward(){
            cout<<"PrintBackward: ";
            if(head == NULL){
                return;
            }
            Node* tail = head;
            while(tail->next != NULL){
                tail = tail->next;
            }
            while(tail!=nullptr){
                cout<<tail->val<<" ";
                tail = tail->prev;
            }
        }
        void deleteAtHead(){
            
        }
        void delteAtTail(){

        }
        void delteAtPos(){

        }
};

int main(){

    LinkedList list;
    list.insertAtHead(20);
    list.insertAtHead(30);
    list.insertAtHead(40);
    list.insertAtTail(90);
    list.insertAtHead(50);
    list.insertAtPos(3, 123);
    list.printForward();
    list.printBackward();

    return 0;
}