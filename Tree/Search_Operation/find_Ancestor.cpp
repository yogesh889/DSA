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

bool findAncestors(Node* root, int key)
{
    if(root == NULL)
        return false;

    if(root->data == key)
        return true;

    if(findAncestors(root->left, key) ||
       findAncestors(root->right, key))
    {
        cout << root->data << " ";
        return true;
    }

    return false;
}

int main()
{
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->right = new Node(6);

    root->left->left->left = new Node(7);
    root->left->left->right = new Node(8);

    findAncestors(root, 8);
}