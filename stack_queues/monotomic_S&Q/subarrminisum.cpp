#include<bits/stdc++.h>
using namespace std;
// tc - O(5N);
// sc - O(5N);

vector<int> nextsmaller(vector<int>&nums){
    int n = nums.size();
    vector<int>ans(n);

    stack<int>st;

    for(int i=n-1;i>=0;i--){
        
        while(!st.empty() && nums[st.top()] >= nums[i]){
            st.pop();
        }

        ans[i] = st.empty() ? n : st.top();

        st.push(i);
    }

    return ans;
}
vector<int>pse(vector<int>&nums){
    int n = nums.size();
    vector<int>psee(n);
    stack<int>st;
    for(int i = 0;i<n;i++){
        while(!st.empty() && nums[st.top()] > nums[i]){
            st.pop();
        }

        psee[i] = st.empty() ? -1 : st.top();

        st.push(i);
    }

    return psee;
}

int sum(vector<int>&nums){
    
    vector<int>nsee = nextsmaller(nums);
    vector<int>psee = pse(nums);
    int total = 0;
    int mod = (int)(1e9+7);
    for(int i =0;i<nums.size();i++){

        int left = i - psee[i];
        int right = nsee[i] - i;

        total = (total + ( right * left * 1ll * nums[i]) % mod);
    }

    return total;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];

    vector<int> res_nse =  nextsmaller(nums);
    for(auto it:res_nse) cout<<it<<" "; cout<<endl;

    vector<int> res_pse =  pse(nums);
    for(auto itt:res_pse) cout<<itt<<" ";
    cout<<endl;

    cout<<sum(nums);
}