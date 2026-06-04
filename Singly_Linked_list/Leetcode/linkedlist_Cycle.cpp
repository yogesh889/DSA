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

void insert_At_Head(Node* &head, Node* &tail, int x){
    Node* newNode = new Node(x);
    if(head == nullptr){
        head = tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

int print(Node* head){
    Node* temp = head;

    int cnt = 0;
    while(temp){
        cout << temp->val << " -> ";
        temp = temp->next;
        cnt++;
    }

    cout << "NULL"<<endl;
    return cnt;
}

int main(){

    Node* head = nullptr;
    Node* tail = nullptr;

    insert_At_Head(head, tail, 10);
    insert_At_Head(head, tail, 20);
    insert_At_Head(head, tail, 30);
    insert_At_Head(head, tail, 40);
    insert_At_Head(head, tail, 50);
    insert_At_Head(head, tail, 60);
    insert_At_Head(head, tail, 70);
    int count = print(head);

    return 0;
}