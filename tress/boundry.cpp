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

bool isleaf(node* root){
    if(root->left == nullptr && root->right == nullptr){
        return true;
    }

    else return false;
}
void leftadd(node* root,vector<int>&res){
    
    
        node* temp = root->left;
        // res.push_back(root->data);

        while(temp){
            if(isleaf(temp)== false) res.push_back(temp->data);

            if(temp->left != nullptr){
                temp = temp ->left;
            }
            else{
                temp = temp->right;
            }
        }
    
}

void rightadd(node* root,vector<int>&res){
    node* temp = root->right;
    vector<int>to_reverse;
    

        while(temp){
            if(isleaf(temp) == false) to_reverse.push_back(temp->data);


            if(temp->right != nullptr){
                temp = temp->right;
            }
            else{
                temp = temp->left;
            }

        }
        for(int i=to_reverse.size()-1; i>=0; i--){
            res.push_back(to_reverse[i]);
        }
    
}

void addleafs(node* root,vector<int>&res){
    
    if(isleaf(root) == true){
        res.push_back(root->data);
    }

    if(root->left != nullptr){
        addleafs(root->left,res);
    }

    if(root->right != nullptr){
        addleafs(root->right,res);
    }
}
vector<int>boundry(node* root){

    vector<int>res;
    if(root == nullptr) return res;
    
    if(isleaf(root) == false) res.push_back(root->data);

   
    leftadd(root,res);
    addleafs(root,res);
    rightadd(root,res);


    return res;

}

int main(){

    // node* root = new node(1);
    // root->left = new node(2);
    // root->right = new node(3);
    // root->left->left = new node(4);
    // root->left->right = new node(5);
    // root->right->left = new node(6);
    // root->right->right = new node(7);


    // node* root = new node(1);
    // root->left = new node(2);
    // root->right = new node(7);

    // root->left->left = new node (3);
    // root->left->left->right= new node (4);

    // root->left->left->right->left = new node(5);
    // root->left->left->right->right = new node(6);

    // root->right->right = new node(8);
    // root->right->right->left = new node(9);
    // root->right->right->left->left = new node(10);
    // root->right->right->left->right= new node(11);


    node* root = new node(10);
    root->left = new node(5);
    root->right = new node(20);
    root->left->left = new node(3);
    root->left->right = new node(8);
    root->left->right->left = new node(7);

    root->right->left = new node(18);
    root->right->right = new node(25);

    vector<int> ans = boundry(root);
    for(auto it:ans){
        cout<<it<<" ";
    }

}