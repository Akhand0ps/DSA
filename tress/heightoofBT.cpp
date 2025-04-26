#include<bits/stdc++.h>

using namespace std;

struct Node
{
    /* data */
    int data;
    struct Node* left;
    struct Node* right;

    Node(int data){
        this->data = data;
        left = right = nullptr;
    }
};


int levelorder(Node* root){
   
    if(root == nullptr) return 1;
    queue<Node*> q;
    q.push(root);
    int height = 0;

    while(!q.empty()){

        int n = q.size();
        
        height++;
        

        for(int i =0;i<n;i++){
            Node* newnode = q.front();
            q.pop();
            if(newnode->left != nullptr) q.push(newnode->left);
            if(newnode->right != nullptr) q.push(newnode->right);
            
        }

    }

    return height;
}

int height(Node* root){
    
    if(root == nullptr) return 0;

    int lh = height(root->left);
    int rh = height(root->right);

    return 1+max(lh, rh);
}
int main(){

    // root->left = new Node(2);
    // root->right = new Node(3);

    // root->left->left = new Node (4);
    // root->left->right = new Node(5);
    // root->left->right->left = new Node(6);

    // root->right->left = new Node(7);
    // root->right->right = new Node(8);
    // root->right->right->left = new Node(9);
    // root->right->right->right = new Node(10); 
    struct Node* root = new Node(3);
    root->left = new Node(9);
    root->right = new Node(20);

    root->right->left = new Node(15);
    root->right->right = new Node(7);
    
    
    cout<<"BFS: "<<levelorder(root);
    cout<<endl<<"recursive: "<<height(root);
  
}