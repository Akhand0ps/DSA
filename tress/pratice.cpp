#include<bits/stdc++.h>
using namespace std;
struct Node{

    int data;
    struct Node* left;
    struct Node* right;

    Node(int data){
        this->data = data;

        left = right = nullptr;
    }
};

vector<int>preorder(Node* root){
    vector<int>preorder_ans;
    if(root == nullptr) return preorder_ans;
    stack<Node*>st;
    st.push(root);

    while(!st.empty()){
        root  = st.top();
        preorder_ans.push_back(root->data);
        st.pop();

        if(root->right != nullptr){
            st.push(root->right);
        }
        if(root->left != nullptr){
            st.push(root->left);
        }
    }

    return preorder_ans;
}
vector<int>inorder(Node* root){
    vector<int>inorder_ans;
    if(root == nullptr) return inorder_ans;
    Node* curr = root;
    stack<Node*>st;

    while(curr != nullptr || !st.empty()){
        
        while(curr != nullptr){
            st.push(curr);
            curr = curr->left;
        }

        curr = st.top();
        st.pop();
        inorder_ans.push_back(curr->data);
        curr = curr->right;
    }

    return inorder_ans;
}
int main(){

    struct Node* root = new Node(1);

    
    root->left = new Node (3);
    root->right = new Node(6);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(9);
    root->left->right->right = new Node(10);
    root->right->left = new Node(7);
    root->right->right = new Node(8);

    vector<int>res = preorder(root);
    for(auto it:res) cout<<it<<" ";
    cout<<endl;
    vector<int>ress = inorder(root);
    for(auto it:ress) cout<<it<<" ";


    

    
    


}