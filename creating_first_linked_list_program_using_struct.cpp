#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
    
};

int main(){

    Node* obj = new Node(1);
    Node* front = obj;
    // cout<<obj->data<<endl;
    // cout<<obj->next<<endl;
    int a;

    // obj->next = new Node(6);
    // obj->next->next = new Node(7);
    // obj->next->next->next = new Node(8);
    // obj->next->next->next->next = new Node(9);

    for(int i=0; i<7; i++){
        cin>>a;
        obj->next = new Node(a);
        obj = obj->next;
    }


     Node* temp = front;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}