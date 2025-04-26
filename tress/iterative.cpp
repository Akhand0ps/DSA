#include<bits/stdc++.h>
using namespace std;
vector<int>preorder(Node* root){
    vector<int>preorderans;
    if(root == nullptr) return;
    stack<Node*>st;

    st.push(root);
    while(!st.empty()){
        root = st.top();
        st.top();
        preorderans.push_back(root->data);

        if(root->right!= nullptr){
            st.push(root->right);
        }
        if(root->left != nullptr){
            st.push_back(root->left);
        }
    }

    return preorderans;
}


// iteartaive 

vector<int>inorderTraversal(Node* root){

    vector<int>inorder;
    stack<Node*>st;

    Node* node = root;

    while(true){
        if(node != nullptr){
            st.push(node);
            node = node->left;
        }
        // node == null
        else {
            if(st.empty() == true) break;
            node = st.top();
            st.pop();
            inorder.push_back(node->data);
            node = node->right;
        }
    }

    return inorder;

    

}