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

vector<int>postorderTraverse(Node* root){
    vector<int>postorder;
    stack<Node*>st;
    Node* curr = root;

    while( curr != nullptr || !st.empty ()){
        if(curr != nullptr){
            st.push(curr);
            curr = curr->left;
        }
        else{

            Node* temp = st.top()->right;
            if(temp == nullptr){

                temp = st.top();
                st.pop();
                postorder.push_back(temp->data);
                while(!st.empty() && temp == st.top()->right){
                    temp = st.top();
                    st.pop();
                    postorder.push_back(temp->data);
                }
            }
            else{
                curr = temp;
            }
        }

    }

    return postorder;

}
vector<int>preorder(Node* root){
    vector<int>preorderans;
    if(root == nullptr) return preorderans;
    stack<Node*>st;

    st.push(root);
    while(!st.empty()){
        root = st.top();
        st.pop();
        preorderans.push_back(root->data);

        if(root->right!= nullptr){
            st.push(root->right);
        }
        if(root->left != nullptr){
            st.push(root->left);
        }
    }

    return preorderans;
}
int main(){

    struct Node* root = new Node(1);

    // root->left = new Node(2);
    // root->right = new Node(7);
    // root->right->left = new Node(8);
    // root->left->left = new Node(3);
    // root->left->left->right = new Node(4);
    // root->left->left->right->right = new Node(5);
    // root->left->left->right->right->right = new Node(6);
   
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(6);
    root->left->right->right = new Node(7);

    vector<int> res = postorderTraverse(root);
    cout<<"post order: ";
    for(auto it:res) cout<<it<<" ";

    vector<int>ress = preorder(root);
    cout<<endl<<"pre order: ";
    for(auto itt:ress)cout<<itt<<" ";
    


}