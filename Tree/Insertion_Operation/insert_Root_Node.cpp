#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int main()
{
    Node* root = NULL;

    root = new Node(10);

    cout << "Root Node = "
         << root->data;

    return 0;
}