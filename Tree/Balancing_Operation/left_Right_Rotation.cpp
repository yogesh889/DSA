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

Node* leftRightRotate(Node* root)
{
    root->left = leftRotate(root->left);
    return rightRotate(root);
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
             30
            /
          20
            \
             25

        LR Rotation Required
    */

    Node* root = new Node(30);
    root->left = new Node(20);
    root->left->right = new Node(25);

    cout << "Before LR Rotation\n";

    cout << "Inorder  : ";
    inorder(root);

    cout << "\nPreorder : ";
    preorder(root);

    cout << "\n\n";

    root = leftRightRotate(root);

    cout << "After LR Rotation\n";

    cout << "Inorder  : ";
    inorder(root);

    cout << "\nPreorder : ";
    preorder(root);

    return 0;
}