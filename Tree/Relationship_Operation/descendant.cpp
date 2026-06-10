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

void descendants(Node* root)
{
    if(root==NULL)
        return;

    if(root->left)
        cout<<root->left->data<<" ";

    if(root->right)
        cout<<root->right->data<<" ";

    descendants(root->left);
    descendants(root->right);
}

int main()
{
    Node* root = new Node(2);

    root->left = new Node(4);
    root->right = new Node(5);

    descendants(root);
}