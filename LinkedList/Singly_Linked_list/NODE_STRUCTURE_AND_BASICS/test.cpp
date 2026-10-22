#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

class LinkedList
{
private:
    Node *head = NULL;
    Node *tail = NULL;

public:
    void InsertAtTail(int Ndata)
    {
        if (head == nullptr && tail == nullptr)
        {
            head = tail = new Node(Ndata);
        }
        else
        {
            tail->next = new Node(Ndata);
            tail = tail->next;
        }
    }

    // InsertAtHead(int Ndata){

    // }

    void printList()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

~LinkedList()
{
    Node *temp = head;

    while (temp != nullptr)
    {
        Node *nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }

    head = tail = nullptr;
}

int main()
{
    LinkedList list;
    list.InsertAtTail(10);
    list.InsertAtTail(20);
    list.InsertAtTail(30);

    list.printList();

    return 0;
}