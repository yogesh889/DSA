#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    vector<Node*> children;

    Node(int value) {
        data = value;
    }

    void addChild(Node* child) {
        children.push_back(child);
    }
};

class Tree {
public:
    Node* root;

    Tree() {
        root = nullptr;
    }

    void createTree() {

        root = new Node(1);

        Node* n2 = new Node(2);
        Node* n3 = new Node(3);
        Node* n4 = new Node(4);

        root->addChild(n2);
        root->addChild(n3);
        root->addChild(n4);
    }

    void display(Node* node) {

        if(node == nullptr)
            return;

        cout << node->data << " ";

        for(auto child : node->children)
            display(child);
    }
};

int main() {

    Tree t;
    t.createTree();

    t.display(t.root);

    return 0;
}