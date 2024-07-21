#include<bits/stdc++.h>

using namespace std;

void recur(vector<int> &ds, vector<int> &nums,vector<vector<int>> &ans, int freq[]){
    if(ds.size() == nums.size()){
        ans.push_back(ds);
        return;
    }

    for(int i =0;i<nums.size();i++){
        if( freq[i]==0 ){
            ds.push_back(nums[i]);
            freq[i]=1;
            recur(ds,nums,ans,freq);
            freq[i] =0;
            ds.pop_back();
        }
    }
}


vector<vector<int>> permute(vector<int> &nums){
    vector<vector<int>> ans;
    vector<int> ds;
    int freq[nums.size()] ={0};
    cout<<"Permutations"<<endl;
    recur(ds,nums,ans,freq);

    return ans;

}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i =0;i<n;i++) cin>>nums[i];

    vector<vector<int>> res = permute(nums);

    for (auto perm : res) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }

}