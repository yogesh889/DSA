#include <iostream>
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

void insert_At_Head(Node *&head, Node *&tail, int x)
{
    Node *newNode = new Node(x);

    if (head == nullptr)
    {
        head = tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void insert_At_Tail(Node *&head, Node *&tail, int x)
{
    Node *newNode = new Node(x);

    if (head == nullptr)
    {
        head = tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}

void insert_At_Specific_Position(Node *&head, Node *&tail, int pos, int val){
    Node *newNode = new Node(val);

    if (pos == 1)
    {
        newNode->next = head;
        head = newNode;

        if (tail == nullptr)
            tail = newNode;

        return;
    }

    Node *curr = head;

    for (int i = 1; i < pos - 1 && curr != nullptr; i++)
    {
        curr = curr->next;
    }

    if (curr == nullptr)
    {
        cout << "Position out of range\n";
        delete newNode;
        return;
    }

    newNode->next = curr->next;
    curr->next = newNode;

    if (newNode->next == nullptr)
    {
        tail = newNode;
    }
}

void print(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
}

int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;

    insert_At_Head(head, tail, 10);
    insert_At_Head(head, tail, 20);
    insert_At_Head(head, tail, 30);
    print(head);
    cout << endl;

    insert_At_Tail(head, tail, 40);
    insert_At_Tail(head, tail, 50);
    insert_At_Tail(head, tail, 60);
    print(head);
    cout << endl;

    int pos, val;
    cout << "Enter position: ";
    cin >> pos;

    cout << "Enter value: ";
    cin >> val;

    insert_At_Specific_Position(head, tail, pos, val);
    print(head);

    return 0;
}
