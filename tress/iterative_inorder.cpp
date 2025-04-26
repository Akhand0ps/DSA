                            
#include <bits/stdc++.h>


using namespace std;

// Node structure for the binary tree
struct Node {
    int data;
    Node* left;
    Node* right;
    // Constructor to initialize
    // the node with a value
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to perform inorder traversal
// of the tree and store values in 'arr'
void inordertraverse(Node* root, vector<int> &inorder){
    
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

    // return inorder;
}

vector<int>inorderr(Node *root){
    vector<int>ans;
    inordertraverse(root,ans);
    return ans;
}
// Main function
int main()
{
    // Creating a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    // Getting inorder traversal
    vector<int> result = inorderr(root);

    // Displaying the inorder traversal result
    cout << "Inorder Traversal: ";
    // Output each value in the
    // inorder traversal result
    for(int val : result) {
        cout << val << " ";
    }

    return 0;
}

                            
                        