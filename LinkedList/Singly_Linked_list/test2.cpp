#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            next = nullptr;
        }
};

int main(){

    //Allocate memory in stack
    Node n1 = 5;
    Node n2(6);
    // int a = 5;
    // int d(5);

    //Allocate memory in heap
    Node* n3 = new Node(7);
    Node* n4 = new Node(8);
    // int* b = new int(6);
    // int* c = new int(7);

    cout<<n1.data<<endl;
    cout<<n2.data<<endl;
    cout<<n3->data<<endl;
    cout<<n4->data<<endl;
    // cout<<n3.data<<endl;

    n3->next = n4;
    cout<<n3->next->data<<endl;

    // stack?
    // heap?

    return 0;
}