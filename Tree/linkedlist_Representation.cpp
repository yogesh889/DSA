#include <iostream>
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

    Node* createTree() {
        int value;

        cout << "Enter node value (-1 for NULL): ";
        cin >> value;

        if (value == -1)
            return nullptr;

        Node* newNode = new Node(value);

        cout << "Enter left child of " << value << endl;
        newNode->left = createTree();

        cout << "Enter right child of " << value << endl;
        newNode->right = createTree();

        return newNode;
    }

    void display(Node* node) {
        if (node == nullptr)
            return;

        cout << node->data << " ";
        display(node->left);
        display(node->right);
    }
};

int main() {
    BinaryTree* tree = new BinaryTree();

    cout << "Create Binary Tree\n";
    tree->root = tree->createTree();

    cout << "\nPreorder Traversal: ";
    tree->display(tree->root);

    return 0;
}