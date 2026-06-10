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

Node* searchNode(Node* root, int key)
{
    if(root == NULL)
        return NULL;

    if(root->data == key)
        return root;

    Node* leftAns = searchNode(root->left, key);

    if(leftAns)
        return leftAns;

    return searchNode(root->right, key);
}

void printDescendants(Node* root)
{
    if(root == NULL)
        return;

    if(root->left)
        cout << root->left->data << " ";

    if(root->right)
        cout << root->right->data << " ";

    printDescendants(root->left);
    printDescendants(root->right);
}

int main()
{
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->right = new Node(6);

    Node* target = searchNode(root, 1);

    printDescendants(target);
}