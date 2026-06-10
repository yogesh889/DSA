#include<iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node* next;
        Node* prev;
        Node(int val){
            data = val;
            next = nullptr;
            prev = nullptr;
        }
}

class DoublyList{
        Node* head;
        Node* tail;

    public: 
        DoublyList(){
            head = tail = NULL;
        }

}

int main(){

    return 0;
}