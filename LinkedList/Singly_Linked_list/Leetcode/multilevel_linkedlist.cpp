#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* child;

    Node(int x){
        data = x;
        next = nullptr;
        child = nullptr;
    }
};

int main(){

    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    head->next->child = new Node(7);
    head->next->child->next = new Node(8);

    head->next->child->next->child = new Node(11);
    head->next->child->next->child->next = new Node(12);

    cout << "Created Successfully";

    return 0;
}