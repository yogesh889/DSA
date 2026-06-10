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

void preorder(Node* root)
{
    if(root==NULL)
        return;

    cout<<root->data<<" ";

    preorder(root->left);
    preorder(root->right);
}

int main()
{
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    Node* subtree = new Node(10);

    subtree->left = new Node(20);
    subtree->right = new Node(30);

    root->left->left = subtree;

    preorder(root);

    return 0;
}