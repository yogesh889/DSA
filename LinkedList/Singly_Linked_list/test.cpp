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
    int n;

    Node* head = nullptr; // Head point to the stating element
    Node* tail = nullptr; // tail pointer will increase if we add new node to it

    for(int i = 0; i < 5; i++){
        cin >> n;

        Node* newNode = new Node(n);

        if(head == nullptr){
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    Node* temp = head;

    while(temp != nullptr){
        cout << temp->data << endl;
        temp = temp->next;
    }

    return 0;
}