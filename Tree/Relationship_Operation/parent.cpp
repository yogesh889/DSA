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

Node* parent(Node* root,int key)
{
    if(root==NULL)
        return NULL;

    if((root->left &&
        root->left->data==key) ||
       (root->right &&
        root->right->data==key))
    {
        return root;
    }

    Node* leftAns =
        parent(root->left,key);

    if(leftAns)
        return leftAns;

    return parent(root->right,key);
}

int main()
{
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);

    Node* p = parent(root,4);

    cout << p->data;
}