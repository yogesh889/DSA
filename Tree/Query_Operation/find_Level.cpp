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

int level(Node* root,int key,int currentLevel)
{
    if(root == NULL)
        return 0;

    if(root->data == key)
        return currentLevel;

    int left =
        level(root->left,
              key,
              currentLevel+1);

    if(left)
        return left;

    return level(root->right,
                 key,
                 currentLevel+1);
}

int main()
{
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->right = new Node(5);

    cout << level(root,5,1);
}