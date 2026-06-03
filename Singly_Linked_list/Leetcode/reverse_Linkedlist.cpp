#include<iostream>
using namespace std;

class ListNode{
    public: 
        int data;
        ListNode* next;
        ListNode(int val){
            data = val;
            next = nullptr;
        }
};

void insert_At_Head(ListNode* &head, ListNode* &tail, int x){
    ListNode* newNode = new ListNode(x);

    if(head == nullptr){
        head = tail = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}

void insert_At_Tail(ListNode* &head, ListNode* &tail, int x){
    ListNode* newNode = new ListNode(x);

    if(head == nullptr){
        head = tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = tail->next;
}

void print(ListNode* head){
    ListNode* temp = head;
    while(temp){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL";
}

ListNode* reverse_Linkedlist(ListNode* head){
    ListNode* prev = nullptr;
    ListNode* curr = head;

    while(curr != nullptr){
        ListNode* nextNode = curr->next;

        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    return prev;
}

int main(){
    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    
    insert_At_Head(head, tail, 10);
    insert_At_Head(head, tail, 20);
    insert_At_Head(head, tail, 30);
    
    insert_At_Tail(head, tail, 40);
    insert_At_Tail(head, tail, 50);
    insert_At_Tail(head, tail, 60);

    cout<<endl;
    print(head);

    ListNode* prev = reverse_Linkedlist(head);
    cout<<endl;

    print(prev);

    return 0;
}