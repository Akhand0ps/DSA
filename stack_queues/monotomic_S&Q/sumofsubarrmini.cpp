#include<bits/stdc++.h>
using namespace std;

int subminisum(vector<int>&nums){

    int mod = (int)(1e9+7);
        int sum = 0;
        for(int i=0;i<nums.size();i++){

            int mini = nums[i];
            for(int j= i;j<nums.size();j++){
                mini = min(mini,nums[j]);
                sum = (sum+mini)%mod;
            }
        }

        return sum;
}

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    
    cout<< subminisum(nums);
    
}