#include<iostream>
using namespace std;

class Node{
    public: 
        int val;
        Node* next;
        Node(int data){
            val = data;
            next = nullptr;
        }
};

void insert_At_Head(Node* &head, int x){
    Node* newNode = new Node(x);

    if(head == nullptr){
        head = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}

void print(Node* &head){
    Node* temp = head;
    if(head == nullptr){
        cout<<"Please... add Node";
    }

    while(temp != nullptr){
        cout<<temp->val<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL";
}

void remove_Duplicate_Node(Node* &head){
    Node* temp = head;
    while(temp != nullptr && temp->next != nullptr){
        if(temp->val == temp->next->val){
            temp->next = temp->next->next;
        }else{
            temp = temp->next;
        }
    }
    cout<<endl;
    print(head);
}

int main(){
    Node* head = nullptr;
    Node* tail = nullptr;

    insert_At_Head(head, 10);
    insert_At_Head(head, 20);
    insert_At_Head(head, 20);
    insert_At_Head(head, 30);
    insert_At_Head(head, 30);
    print(head);

    remove_Duplicate_Node(head);

    return 0;
}