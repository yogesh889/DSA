#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* random;

    Node(int x){
        data = x;
        next = nullptr;
        random = nullptr;
    }
};

int main(){

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    first->next = second;
    second->next = third;

    // Random Links
    first->random = third;
    second->random = first;
    third->random = second;

    Node* temp = first;

    while(temp){

        cout << "Node = " << temp->data;

        if(temp->random)
            cout << " Random = " << temp->random->data;

        cout << endl;

        temp = temp->next;
    }

    return 0;
}