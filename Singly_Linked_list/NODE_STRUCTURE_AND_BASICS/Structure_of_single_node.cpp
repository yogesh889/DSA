#include<iostream>
using namespace std;

class Node{
    public: 
        int data; //member variable
        Node* next; //member variable

        // we are using data = value here because constructor paramenter and member varialble have different naming
        Node(int value){
            data = value; //Assigning parameter value to member variable
            next = nullptr; //Assigning parameter value to member variable
        }
};

int main(){

    Node* n1 = new Node(3);
    Node n5 = 5;
    // Node n6 = {3.5};
    Node n7(9);

    Node* temp = n1;
    while(temp != nullptr){
        cout<<n1->data<<endl;
        n1 = n1->next;
    }

}