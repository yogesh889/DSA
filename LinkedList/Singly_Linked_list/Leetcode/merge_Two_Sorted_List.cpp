#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

void insert_At_Head(Node*& head, int val){
    Node* newNode = new Node(val);

    newNode->next = head;
    head = newNode;
}

void print(Node* head){
    Node* temp = head;

    while(temp){
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";
}

Node* merge_Linkedlist(Node* List1, Node* List2){

    // If one list is empty
    if(List1 == nullptr) return List2;
    if(List2 == nullptr) return List1;

    // Dummy node
    Node* dummy = new Node(-1);
    Node* tail = dummy;

    while(List1 != nullptr && List2 != nullptr){

        if(List1->data <= List2->data){
            tail->next = List1;
            List1 = List1->next;
        }
        else{
            tail->next = List2;
            List2 = List2->next;
        }

        tail = tail->next;
    }

    // Attach remaining nodes
    if(List1 != nullptr){
        tail->next = List1;
    }
    else{
        tail->next = List2;
    }

    Node* mergedHead = dummy->next;
    delete dummy;

    return mergedHead;
}

int main(){

    Node* List1 = nullptr;
    Node* List2 = nullptr;

    int n;
    cout << "Enter number of elements in List1: ";
    cin >> n;

    for(int i=0; i<n; i++){
        int val;
        cin >> val;
        insert_At_Head(List1, val);
    }

    cout << "List1: ";
    print(List1);
    cout << endl;

    int m;

    cout << "Enter number of elements in List2: ";
    cin >> m;

    for(int i=0; i<m; i++){
        int val;
        cin >> val;
        insert_At_Head(List2, val);
    }

    cout << "List2: ";
    print(List2);
    cout << endl;

    Node* mergedList = merge_Linkedlist(List1, List2);

    cout << "Merged List: ";
    print(mergedList);
    
    return 0;
}