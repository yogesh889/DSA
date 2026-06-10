#include <iostream>
#include <queue>
using namespace std;

// The Blueprint of a Node
struct Node {
    int data;
    Node* left;
    Node* right;
    
    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// 1. Inorder Traversal (L N R)
void inorderTraversal(Node* root) {
    if (root == nullptr) return; // Base Case
    
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

// 2. Level Order Traversal (BFS) - Very important for LeetCode
void levelOrder(Node* root) {
    if (root == nullptr) return;
    
    queue<Node*> q;
    q.push(root);
    
    while (!q.empty()) {
        Node* current = q.front();
        q.pop();
        
        cout << current->data << " ";
        
        if (current->left) q.push(current->left);
        if (current->right) q.push(current->right);
    }
}