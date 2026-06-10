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

Node* rightRotate(Node* y)
{
    Node* x = y->left;
    Node* temp = x->right;

    x->right = y;
    y->left = temp;

    return x;
}

Node* rightLeftRotate(Node* root)
{
    root->right = rightRotate(root->right);
    return leftRotate(root);
}

void inorder(Node* root)
{
    if(root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
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
    /*
           20
             \
              30
             /
            25

        RL Rotation Required
    */

    Node* root = new Node(20);

    root->right = new Node(30);
    root->right->left = new Node(25);

    cout << "Before RL Rotation\n";

    cout << "Inorder  : ";
    inorder(root);

    cout << "\nPreorder : ";
    preorder(root);

    cout << "\n\n";

    root = rightLeftRotate(root);

    cout << "After RL Rotation\n";

    cout << "Inorder  : ";
    inorder(root);

    cout << "\nPreorder : ";
    preorder(root);

    return 0;
}