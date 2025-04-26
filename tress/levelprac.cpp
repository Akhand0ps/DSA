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

vector<vector<int>>level(Node* root){
    vector<vector<int>> ans;
    if(root == nullptr)return ans;

    queue<Node*>q;
    q.push(root);

    bool leftToRight = true;

    while(!q.empty()){
        int size = q.size();
        vector<int>level;

        for(int i=0;i<size;i++){
            Node* newnode = q.front();
            q.pop();

            
            if(leftToRight){
                level.push_back(newnode->data);
            }
            else level.insert(level.begin(),newnode->data);


            if(newnode->left) q.push(newnode->left);
            if(newnode->right) q.push(newnode->right);

        }
        leftToRight  = !leftToRight;
        ans.push_back(level);
    }

    return ans;
}

int main(){
    
    struct Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->right = new Node(6);

    vector<vector<int>> res = level(root);

    cout<<"level order: ";
    for(auto it:res){
        for(auto itt:it){
            cout<<itt<<" ";
        }
    }
}