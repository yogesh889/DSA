#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

class BinaryTree {
public:
    Node* root;

    BinaryTree() {
        root = nullptr;
    }

    // Insert using Level Order
    void insert(int key) {

        if (root == nullptr) {
            root = new Node(key);
            return;
        }

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {

            Node* temp = q.front();
            q.pop();

            if (temp->left == nullptr) {
                temp->left = new Node(key);
                return;
            } else {
                q.push(temp->left);
            }

            if (temp->right == nullptr) {
                temp->right = new Node(key);
                return;
            } else {
                q.push(temp->right);
            }
        }
    }

    // Delete deepest node
    void deleteDeepest(Node* dNode) {

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {

            Node* temp = q.front();
            q.pop();

            if (temp->left) {

                if (temp->left == dNode) {
                    delete temp->left;
                    temp->left = nullptr;
                    return;
                }

                q.push(temp->left);
            }

            if (temp->right) {

                if (temp->right == dNode) {
                    delete temp->right;
                    temp->right = nullptr;
                    return;
                }

                q.push(temp->right);
            }
        }
    }

    // Delete node by value
    void deleteNode(int key) {

        if (root == nullptr)
            return;

        // Special case: only root exists
        if (root->left == nullptr &&
            root->right == nullptr) {

            if (root->data == key) {
                delete root;
                root = nullptr;
            }
            return;
        }

        queue<Node*> q;
        q.push(root);

        Node* keyNode = nullptr;
        Node* temp = nullptr;

        while (!q.empty()) {

            temp = q.front();
            q.pop();

            if (temp->data == key)
                keyNode = temp;

            if (temp->left)
                q.push(temp->left);

            if (temp->right)
                q.push(temp->right);
        }

        if (keyNode != nullptr) {

            int deepestValue = temp->data;

            deleteDeepest(temp);

            keyNode->data = deepestValue;
        }
    }

    // Level Order Traversal
    void levelOrder() {

        if (root == nullptr) {
            cout << "Tree is Empty\n";
            return;
        }

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {

            Node* temp = q.front();
            q.pop();

            cout << temp->data << " ";

            if (temp->left)
                q.push(temp->left);

            if (temp->right)
                q.push(temp->right);
        }

        cout << endl;
    }
};

int main() {

    BinaryTree tree;

    // Insertion
    tree.insert(1);
    tree.insert(2);
    tree.insert(3);
    tree.insert(4);
    tree.insert(5);
    tree.insert(6);

    cout << "Before Deletion:\n";
    tree.levelOrder();

    // Delete node 2
    tree.deleteNode(2);

    cout << "After Deleting 2:\n";
    tree.levelOrder();

    return 0;
}