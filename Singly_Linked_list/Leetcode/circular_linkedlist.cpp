#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }
};

int main(){

    int n;
    cin >> n;

    if(n == 0) return 0;

    int x;
    cin >> x;

    Node* head = new Node(x);
    Node* tail = head;

    for(int i = 1; i < n; i++){
        cin >> x;

        tail->next = new Node(x);
        tail = tail->next;
    }

    // Make circular
    tail->next = head;

    Node* temp = head;

    do{
        cout << temp->data << " ";
        temp = temp->next;
    }
    while(temp != head);

    return 0;
}