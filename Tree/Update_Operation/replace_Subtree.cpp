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

void deleteSubtree(Node* root)
{
    if(root == NULL)
        return;

    deleteSubtree(root->left);
    deleteSubtree(root->right);

    delete root;
}

void preorder(Node* root)
{
    if(root == NULL)
        return;

    cout << root->data << " ";

    preorder(root->left);
    preorder(root->right);
}

int main()
{
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    Node* newSubtree = new Node(10);

    newSubtree->left = new Node(20);
    newSubtree->right = new Node(30);

    deleteSubtree(root->left);

    root->left = newSubtree;

    preorder(root);

    return 0;
}