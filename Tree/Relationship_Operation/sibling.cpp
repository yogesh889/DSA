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

void sibling(Node* root,int key)
{
    if(root==NULL)
        return;

    if(root->left &&
       root->left->data==key)
    {
        if(root->right)
            cout<<root->right->data;
    }

    else if(root->right &&
            root->right->data==key)
    {
        if(root->left)
            cout<<root->left->data;
    }

    sibling(root->left,key);
    sibling(root->right,key);
}

int main()
{
    Node* root = new Node(2);

    root->left = new Node(4);
    root->right = new Node(5);

    sibling(root,4);
}