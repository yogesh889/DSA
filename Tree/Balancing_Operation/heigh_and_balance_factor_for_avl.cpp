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
    /*
              30
             /  \
           20    40
          /
        10

        Height = 3
        Balance Factor of 30 = 2 - 1 = 1
    */

    Node* root = new Node(30);

    root->left = new Node(20);
    root->right = new Node(40);

    root->left->left = new Node(10);

    cout << "Inorder Traversal: ";
    inorder(root);

    cout << "\n\nHeight of Tree: "
         << height(root);

    cout << "\nBalance Factor of Root (30): "
         << balanceFactor(root);

    cout << "\nBalance Factor of Node (20): "
         << balanceFactor(root->left);

    cout << "\nBalance Factor of Node (40): "
         << balanceFactor(root->right);

    return 0;
}