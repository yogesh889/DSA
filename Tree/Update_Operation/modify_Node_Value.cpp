/* 
search node
update value
*/

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
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    Node* target = searchNode(root, 5);

    if(target)
        target->data = 50;

    inorder(root);

    return 0;
}