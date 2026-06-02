#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int a){
        data = a;
        next = nullptr;
    }
};

int main(){

    int n;
    cin >> n;

    if(n == 0)
        return 0;

    int x;
    cin >> x;

    Node* head = new Node(x);
    Node* temp = head;

    for(int i = 1; i < n; i++){
        cin >> x;

        temp->next = new Node(x);
        temp = temp->next;
    }

    Node* temp2 = head;

    while(temp2 != nullptr){
        cout << temp2->data << " ";
        temp2 = temp2->next;
    }

    return 0;
}