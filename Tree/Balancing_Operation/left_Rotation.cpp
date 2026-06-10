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

Node* leftRotate(Node* x)
{
    Node* y = x->right;

    Node* temp = y->left;

    y->left = x;

    x->right = temp;

    return y;
}

void inorder(Node* root)
{
    if(root==NULL)
        return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
    Node* root = new Node(10);

    root->right = new Node(20);

    root->right->right = new Node(30);

    root = leftRotate(root);

    inorder(root);
}       