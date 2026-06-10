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

    cout<<"Deleting "<<root->data<<endl;

    delete root;
}

int main()
{
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    deleteSubtree(root->left);

    root->left = NULL;

    return 0;
}