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

int findDepth(Node* root, int key, int depth)
{
    if(root == NULL)
        return -1;

    if(root->data == key)
        return depth;

    int left =
        findDepth(root->left,key,depth+1);

    if(left != -1)
        return left;

    return findDepth(root->right,key,depth+1);
}

int main()
{
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << findDepth(root,5,0);
}