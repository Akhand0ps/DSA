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

void preorder(Node* root){
    
    if(root == NULL) return;
    
    cout<<root->data<<" ";

    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* node){
    if(node == nullptr)return;

    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}

void postorder(Node* node){
    if(node == nullptr) return;

    postorder(node->left);
    postorder(node->right);
    cout<<node->data<<" ";
}

 vector<vector<int>> levelorder(Node* root){
    vector<vector<int>>ans;
    if(root == nullptr) return ans;
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){

        int n = q.size();
        vector<int>level;

        for(int i =0;i<n;i++){
            Node* newnode = q.front();
            q.pop();
            if(newnode->left != nullptr) q.push(newnode->left);
            if(newnode->right != nullptr) q.push(newnode->right);
            level.push_back(newnode->data);
        }

        ans.push_back(level);
    }

    return ans;
}
int main(){
    struct Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node (4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(6);

    root->right->left = new Node(7);
    root->right->right = new Node(8);
    root->right->right->left = new Node(9);
    root->right->right->right = new Node(10); 
    cout<<"Preorder: ";
    preorder(root);
    cout<<endl;
    cout<<"inorder: ";
    inorder(root);
    cout<<endl;
    cout<<"postorder: ";
    postorder(root);

    vector<vector<int>> res = levelorder(root);
    cout<<endl<<"Level order: ";
    for(auto it:res){
        for(auto itt: it){
            cout<<itt<<" ";
        }
    }
  
}