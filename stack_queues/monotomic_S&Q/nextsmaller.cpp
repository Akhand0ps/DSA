#include<bits/stdc++.h>
using namespace std;
// 4 5 2 10 08
// 2 2 -1 8 -1 (ans)
vector<int> nextsmaller(vector<int>&nums){
    int n = nums.size();
    vector<int>ans(n);

    stack<int>st;

    for(int i=n-1;i>=0;i--){
        
        while(!st.empty() && st.top() >= nums[i]){
            st.pop();
        }

        ans[i] = st.empty() ? -1 : st.top();

        st.push(nums[i]);
    }

    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];

    vector<int> res =  nextsmaller(nums);
    for(auto it:res) cout<<it<<" ";
}