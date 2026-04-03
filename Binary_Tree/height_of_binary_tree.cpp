#include<iostream>
#include<queue>
using namespace std;

class Node{
    public: 
        int data;
        Node* left;
        Node* right;

        Node(int data){
            this->data = data;
            this->left = nullptr;
            this->right = nullptr;
        }
};

int height(Node* root) {
    if (root == NULL) return -1;

    queue<Node*> q;
    q.push(root);

    int h = -1;

    while (!q.empty()) {
        int size = q.size();

        // Process one level
        for (int i = 0; i < size; i++) {
            Node* node = q.front();
            q.pop();

            if (node->left != NULL)
                q.push(node->left);

            if (node->right != NULL)
                q.push(node->right);
        }

        h++; // completed one level
    }

    return h;
}

int main(){

    Node* root = new Node(12);
    root->left = new Node(8);
    root->right = new Node(18);
    root->left->left = new Node(5);
    root->left->right = new Node(11);

    cout<<height(root);


    return 0;
}