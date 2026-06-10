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

void printChildren(Node* node)
{
    if(node->left)
        cout<<node->left->data<<" ";

    if(node->right)
        cout<<node->right->data<<" ";
}

int main()
{
    Node* root = new Node(2);

    root->left = new Node(4);
    root->right = new Node(5);

    printChildren(root);
}