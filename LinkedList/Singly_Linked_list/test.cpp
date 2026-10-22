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

int main()
{

    Node n1(10);
    cout<<n1.next<<endl;
    cout<<n1.data<<endl;
    // n1.next = new Node(20);
    // n1.next->next = new Node(30);
    Node n2(20);
    Node n3(30);
    n1.next = &n2;
    n2.next = &n3;
    cout<<n1.next.<<endl;
    // n2.next = &n3;
    cout << n1.next->next->data;

    return 0;
}