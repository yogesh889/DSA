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

Node* search(Node* root,int key)
{
    if(root==NULL)
        return NULL;

    if(root->data==key)
        return root;

    Node* leftAns =
        search(root->left,key);

    if(leftAns)
        return leftAns;

    return search(root->right,key);
}

int degree(Node* node)
{
    int count = 0;

    if(node->left)
        count++;

    if(node->right)
        count++;

    return count;
}

int main()
{
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    Node* node = search(root,1);

    cout << degree(node);
}