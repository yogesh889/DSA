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

class Circularlist{
    private:
        Node* head;
        Node* tail;
    public: 
        Circularlist(){
            head = tail = nullptr;
        }

        void insert_At_Head(int val){
            Node* newNode = new Node(val);

            if(head == nullptr){
                head = tail = newNode;
                tail->next = head;
            }else{
                newNode->next = head;
                head = newNode;
                tail->next = head;
            }

        }

        void print(){
            if(head == nullptr){
                return;
            }
            cout<<head->data<<" -> ";
            Node* temp = head->next;
            while(temp != head){
                cout<<temp->data<<" -> ";
                temp = temp->next;
            }
            cout<<head->data<<endl;
        }

};


int main(){

    Circularlist cll;

    cll.insert_At_Head(10);
    cll.insert_At_Head(20);
    cll.insert_At_Head(30);

    cll.print();

    return 0;
}