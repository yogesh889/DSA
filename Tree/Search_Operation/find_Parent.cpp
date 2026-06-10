#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node *findParent(Node *root, int key)
{
    if (root == NULL)
        return NULL;

    if ((root->left && root->left->data == key) || (root->right && root->right->data == key))
    {
        return root;
    }

    Node *leftAns = findParent(root->left, key);

    if (leftAns)
        return leftAns;

    return findParent(root->right, key);
}

int main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->right = new Node(6);

    Node *parent = findParent(root, 5);

    if (parent)
        cout << parent->data;
    else
        cout << "No Parent";
}