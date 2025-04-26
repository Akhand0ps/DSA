#include<bits/stdc++.h>
using namespace std;


class node{

    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        left = right = nullptr;
    }
};


vector<vector<int>> vertical(node* root){

    //map to store by vertical and level
    // key will be vertical ->> x and value will be map of y(key) and nodes(value);

    map<int, map<int, multiset<int>>>nodes;
// to store nodes based of BFS 

    queue<pair<node*,pair<int,int>>> q;

    q.push({root,{0,0}});

    while(!q.empty()){
        
        //kuch krna tha akhnd
        auto p = q.front();
        q.pop();
        node* temp = p.first;

        int vertical = p.second.first;
        int level = p.second.second;
        
        // insert in map with x and y

        nodes[vertical][level].insert(temp->data);

        // push left child
        if(temp->left != nullptr){
            q.push({temp->left,{vertical-1,level+1}});
        }

        // push right child
        if(temp->right != nullptr){
            q.push({temp->right,{vertical+1,level+1}});
        }

    }

    vector<vector<int>>ans;

    for(auto p:nodes){
        vector<int>col;
        for(auto qq:p.second){
            col.insert(col.end(),qq.second.begin(),qq.second.end());

        }
        ans.push_back(col);
    }

    return ans;


}

int main(){

    node* root = new node(1);

    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->left->right = new node(5);
    root->left->left->right->right = new node(6);

    root->right->left = new node(9);
    root->right->right = new node(11);
    root->right->right->left = new node(10);

    vector<vector<int>>res = vertical(root);

    cout<<"Vertical order: ";
    for(auto it:res){
        for(auto itt:it){
            cout<<itt<<" ";
        }
    }
}