// #include<bits/stdc++.h>
// using namespace std;


// class node{

//     public:
//     int data;
//     node* left;
//     node* right;

//     node(int data){
//         this->data = data;
//         left = right = nullptr;
//     }
// };




// vector<int>topView(node *root)
// {
//     vector<int>ans;
//     if(root == nullptr) return ans;

//     queue<pair<node*,int>>q;

//     map<int,int>mpp;

//     q.push({root,0});

//     while(!q.empty()){

//         auto p = q.front();
//         q.pop();

//         node* newnode = p.first;
//         int x = p.second;

//         if(mpp.find(x) == mpp.end()){
//             mpp[x] = newnode->data;
//         }

//         if(newnode->left){
//             q.push({newnode->left,x-1});
//         }
//         if(newnode->right){
//             q.push({newnode->right,x+1});
//         }


//     }

//     for(auto it:mpp){
//         ans.push_back(it.second);
//     }


//     return ans;

// }


// int main(){

//     node* root = new node(1);

//     root->left = new node(2);
//     root->right = new node(3);
    
//     root->left->left = new node(4);
//     root->left->right = new node(10);
//     root->left->left->right = new node(5);
//     root->left->left->right->right = new node(6);

//     root->right->left = new node(9);
//     root->right->right = new node(11);
 

//     vector<int>res = topView(root);

//     cout<<"Top view: ";
//     for(auto it:res){
        
//         cout<<it<<" ";
//     }
// }




#include <bits/stdc++.h>
using namespace std;

long long maxbit(long long n){
    long long maxi =0;
    
    for(long long i=1;i<n;i++){
        
        for(long long j = i+1;j<n;j++){
            
            if((i & j) == 0){
                maxi = max(maxi,i*j);
            }
        }
    }
    
    
    return maxi;
}

int main()
{
    long long n;
    cin>>n;
    
    cout<<maxbit(n);

    return 0;
}