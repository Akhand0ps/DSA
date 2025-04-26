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
void inorder(TreeNode* root,int &cnt,int k,int &KS){

    if(root == nullptr || cnt >=k){
        return;
    }

    inorder(root->left,cnt,k,KS);
    cnt++;
    if(cnt == k){
        KS = root->val;
        return;
    }
    
    inorder(root->right,cnt,k,KS);
}

void reverseinorder(TreeNode* root,int &cnt,int k,int &kL){

    if(root == nullptr || cnt >= k) return;

    reverseinorder(root->right,cnt,k,kL);
    cnt++;

    if(cnt == k){
        kL = root->val;
        return;
    }
    

    reverseinorder(root->left,cnt,k,kL);
}
pair<int,int> findKth(TreeNode* root,int k){
    

    int kthsmall = INT_MIN, kthlar= INT_MIN;
    int cnt=0;
    inorder(root,cnt,k,kthsmall);

    cnt =0;

    reverseinorder(root,cnt,k,kthlar);

    return make_pair(kthsmall,kthlar);
}
int main(){

    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(13);
    root->left->left = new TreeNode(3);
    root->left->left->left = new TreeNode(2);
    root->left->left->right = new TreeNode(4);
    root->left->right = new TreeNode(6);
    root->left->right->right = new TreeNode(9);
    root->right->left = new TreeNode(11);
    root->right->right = new TreeNode(14);
    
   
    
  
    
    
    // Find the Kth smallest and largest elements
    int k = 3; 
    cout << "k: "<< k <<endl;
    pair<int, int> kthElements = findKth(root, k);

    cout << "Kth smallest element: " << kthElements.first << endl;
    cout << "Kth largest element: " << kthElements.second << endl;

    return 0;
}