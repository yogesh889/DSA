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

Node* rightRotate(Node* y)
{
    if (y == NULL || y->left == NULL)
        return y;

    Node* x = y->left;
    Node* temp = x->right;

    x->right = y;
    y->left = temp;

    return x;
}

void inorder(Node* root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node* root)
{
    if (root == NULL)
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
          /
         10
    */

    Node* root = new Node(30);

    root->left = new Node(20);
    root->left->left = new Node(10);

    cout << "Before Right Rotation\n";

    cout << "Inorder  : ";
    inorder(root);

    cout << "\nPreorder : ";
    preorder(root);

    cout << "\n\n";

    root = rightRotate(root);

    /*
              20
             /  \
           10    30
    */

    cout << "After Right Rotation\n";

    cout << "Inorder  : ";
    inorder(root);

    cout << "\nPreorder : ";
    preorder(root);

    cout << endl;

    return 0;
}