#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* parent;
    vector<Node*> children;

    Node(int value) {
        data = value;
        parent = nullptr;
    }

    void addChild(Node* child) {
        child->parent = this;
        children.push_back(child);
    }
};

int main() {

    Node* root = new Node(1);

    Node* child1 = new Node(2);
    Node* child2 = new Node(3);

    root->addChild(child1);
    root->addChild(child2);

    cout << "Root: " << root->data << endl;
    cout << "Child Parent: "
         << child1->parent->data;

    return 0;
}