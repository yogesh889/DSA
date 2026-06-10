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

bool searchNode(Node* root, int key)
{
    if(root == NULL)
        return false;

    if(root->data == key)
        return true;

    return searchNode(root->left, key) ||
           searchNode(root->right, key);
}

int main()
{
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->right = new Node(6);

    if(searchNode(root, 5))
        cout << "Found";
    else
        cout << "Not Found";
}