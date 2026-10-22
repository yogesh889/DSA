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
    Node n2(20);
    Node n3(30);
    n1->next = &n2;
    n2->next = &n3;
    cout<<n2->next->data;

        return 0;
}