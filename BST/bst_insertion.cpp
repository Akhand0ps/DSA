#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        left=right=nullptr;
    }
};

Node* insert(Node* root,int val){

    if(root == nullptr) return new Node(val);
    
    if(val < root->val){
        root->left = insert(root->left,val);
    }

    else if(val > root->val){
        root->right = insert(root->right,val);
    }

    return root;
}

void inorder(Node* root){
    if(root != nullptr){
        inorder(root->left);

        cout<<root->val<<" ";
        inorder(root->right);
    }
}

int main() {
    Node* root = NULL;

    // Insert nodes into the BST
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    // Print the BST in Inorder Traversal
    cout << "Inorder Traversal of BST: ";
    inorder(root);

    return 0;
}

