#include<bits/stdc++.h>
using namespace std;

class TreeNode{

    public:
    int val;

    TreeNode* left;
    TreeNode* right;

    TreeNode(int data){
        val = data;
        left = right= nullptr;
    }
};

void leftt(TreeNode* root,int &mini){

        if(root == nullptr)return;

        mini = min(mini,root->val);
        leftt(root->left,mini);
        leftt(root->right,mini);


    }

    void rightt(TreeNode* root,int &mini){

        if(root == nullptr)return;

        mini = min(mini,root->val);
        rightt(root->left,mini);

        rightt(root->right,mini);
    }
    int isValidBST(TreeNode* root) {

        TreeNode* Real = root;
        int left_mini = INT_MAX;
        int right_mini = INT_MAX;
        cout<<left_mini<<endl;
        cout<<right_mini<<endl;
        leftt(root->left,left_mini);
        rightt(root->right,right_mini);

        if((left_mini < root->val) && (root->val < right_mini)) return 1; 

        return -1;

}

int main(){

    // TreeNode* root = new TreeNode(5);
    // root->left = new TreeNode(1);
    // root->right = new TreeNode(4);
    // root->right->left = new TreeNode(3);
    // root->right->right = new TreeNode(6);
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);

    if(isValidBST(root) == 1)cout<<"true";
    else cout<<"false";


}