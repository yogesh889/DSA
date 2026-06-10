#include<bits/stdc++.h>
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

        void preorder(Node* node){
            if(node == nullptr){
                return;
            }

            cout<<node->data<<" ";
            preorder(node->left);
            preorder(node->right);
        }

        void inorder(Node* node){
            if(node == nullptr){
                return;
            }

            inorder(node->left);
            cout<<node->data<<" ";
            inorder(node->right);
        }

        void postorder(Node* node){
            if(node == nullptr){
                return;
            }

            inorder(node->left);
            inorder(node->right);
            cout<<node->data<<" ";
        }

        void levelorder(){
            if(root == nullptr){
                return;
            }

            queue<Node*> q;
            q.push(root);

            while(!q.empty()){
                Node* current = q.front();
                q.pop();

                cout<<current->data<<" ";

                if(current->left){
                    q.push(current->left);
                }
                if(current->right){
                    q.push(current->right);
                }
            }
        }
};

int main(){

    BinaryTree tree;
    tree.createTree();

    cout<<"Preorder: ";
    tree.preorder(tree.root);
    cout<<endl;
    
    cout<<"inorder: ";
    tree.inorder(tree.root);
    cout<<endl;

    cout<<"postorder: ";
    tree.postorder(tree.root);
    cout<<endl;

    cout<<"Level order: ";
    tree.levelorder();
    cout<<endl;

    return 0;
}