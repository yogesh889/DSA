#include <iostream>
#include <queue>
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

void insert(Node* root,int value)
{
    queue<Node*> q;

    q.push(root);

    while(!q.empty())
    {
        Node* current = q.front();
        q.pop();

        if(current->left==NULL)
        {
            current->left = new Node(value);
            return;
        }
        else
        {
            q.push(current->left);
        }

        if(current->right==NULL)
        {
            current->right = new Node(value);
            return;
        }
        else
        {
            q.push(current->right);
        }
    }
}

void levelOrder(Node* root)
{
    if(root==NULL)
        return;

    queue<Node*> q;

    q.push(root);

    while(!q.empty())
    {
        Node* current=q.front();
        q.pop();

        cout<<current->data<<" ";

        if(current->left)
            q.push(current->left);

        if(current->right)
            q.push(current->right);
    }
}

int main()
{
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);

    insert(root,5);

    levelOrder(root);

    return 0;
}