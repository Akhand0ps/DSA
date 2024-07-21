#include<bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int ind = -1;

        // find dip
        for(int i = n-2;i>=0;i--){
            if(nums[i] < nums[i+1]){
                ind =i;
                break;
            }
        }
        if(ind == -1){
            reverse(nums.begin(), nums.end());
            return nums;
        }
        for(int i = n-1;i>=ind;i--){
            if(nums[i] > nums[ind]){
                swap(nums[i] , nums[ind]);
                break;
            }
        }

        reverse(nums.begin() + ind + 1,nums.end());
        return nums;
    }
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>> nums[i];
    vector<int> res= nextPermutation(nums);

    for(int i = 0;i<n;i++){
        cout<<res[i]<<" ";
    }

}