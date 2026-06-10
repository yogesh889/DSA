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

bool ancestor(Node* root,int key)
{
    if(root==NULL)
        return false;

    if(root->data==key)
        return true;

    if(ancestor(root->left,key) ||
       ancestor(root->right,key))
    {
        cout<<root->data<<" ";
        return true;
    }

    return false;
}

int main()
{
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->right = new Node(5);

    ancestor(root,5);
}