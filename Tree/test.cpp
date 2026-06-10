#include<iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node* left;
        Node* right; 
        Node(int val){
            data = val;
            left = nullptr;
            right = nullptr;
        }

        // Node(int data){
        //     this->data = data;
        //     this->left = nullptr;
        //     this->right = nullptr;
        // }
};

class BinaryTree{
    public: 
        Node* root;

        BinaryTree(){
            root = nullptr;
        }

        void createTree(){
            root = new Node(1);

            root->left = new Node(2);
            root->right = new Node(3);

            root->left->left = new Node(4);
            root->left->right = new Node(5);
        }

        void display(Node* node){
            if(node == nullptr){
                return;
            }
            cout<<node->data<<" ";
            display(node->left);
            display(node->right);
        }
};

int main(){
    BinaryTree tree;

    tree.createTree();

    cout<<"tree node"<<endl;

    tree.display(tree.root);

    return 0;
}