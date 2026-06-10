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

int height(Node* root)
{
    if(root == NULL)
        return 0;

    return 1 + max(height(root->left),
                   height(root->right));
}

int balanceFactor(Node* root)
{
    if(root == NULL)
        return 0;

    return height(root->left) -
           height(root->right);
}

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

Node* insert(Node* root, int key)
{
    if(root == NULL)
        return new Node(key);

    if(key < root->data)
        root->left = insert(root->left, key);

    else if(key > root->data)
        root->right = insert(root->right, key);

    else
        return root;

    int bf = balanceFactor(root);

    // LL
    if(bf > 1 && key < root->left->data)
        return rightRotate(root);

    // RR
    if(bf < -1 && key > root->right->data)
        return leftRotate(root);

    // LR
    if(bf > 1 && key > root->left->data)
    {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    // RL
    if(bf < -1 && key < root->right->data)
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

void inorder(Node* root)
{
    if(root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    Node* root = NULL;

    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 10); // LL Rotation

    cout << "Inorder Traversal: ";
    inorder(root);

    return 0;
}