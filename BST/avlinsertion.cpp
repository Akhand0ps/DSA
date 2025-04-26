#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int val;
    int height;
    node* left;
    node* right;

    node(int data){
        val = data;
        left = right = nullptr;
        height = 1; 
    }
};


int height(node* root){

    if(root == nullptr){
        return 0;
    }

    int lh = height(root->left);
    int rh = height(root->right);

    return 1+ max(lh,rh);
}

bool isBalanced(node* root){


    if(root == nullptr)return true;

    if(isBalanced(root->left) == false) return false;

    if(isBalanced(root->right) == false) return false;

    int lh = height(root->left);
    int rh = height(root->right);

    if(abs(lh - rh) <= 1) return true;
    else return false;
}

int getbalanced(node* n){

    if(n != nullptr)
    return height(n->left) - height(n->right);
    else return 0;
}

node* RightRotate(node* y){
    node* x = y->left;
    node* T2 = x->right;

    // 
    x->right = y;
    y->left = T2;

    y->height = max(height(y->left),height(y->right))+1;
    x->height = max(height(x->left),height(x->right))+1;

    return x;
}

node* leftrotate(node* x){
    node* y= x->right;
    node* T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(height(x->left),height(x->right))+1;
    y->height = max(height(y->left),height(y->right))+1;

    return y; // new root;
}

node* insert(node* root,int val){

    if(!root) return new node(val);

    if(val < root->val) root->left = insert(root->left,val);
    
    else if(val > root->val){

       root->right =  insert(root->right,val);
    } 
    
    else {
        return root;
    }
    // update height


    root->height = 1+max(height(root->left),height(root->right));

    int balance = getbalanced(root);

    // LL 

    if(balance > 1 && val < root->left->val)
    {
        return RightRotate(root);
    }

    // RR
    if(balance < -1 && val > root->right->val)
    {
        return leftrotate(root);
    }

    // RL
    if(balance < -1 && val < root->right->val){
        root->right = RightRotate(root->right);
        return leftrotate(root);
    }

    return root;
}

void inorder(node* root,vector<int>&nums){
    if(!root)return;

    inorder(root->left,nums);
    nums.push_back(root->val);
    inorder(root->right,nums);

}
int main(){

    // node* root = new node();

    node *root = nullptr; 
    
    // Constructing tree given in the above figure 
    root = insert(root, 10); 
    root = insert(root, 20); 
    root = insert(root, 30); 
    root = insert(root, 40); 
    root = insert(root, 50);
    root = insert(root, 25); 

    vector<int>nums;

    inorder(root,nums);
    cout<<"Inorder: ";
    for(auto it:nums)cout<<it<<" ";



}