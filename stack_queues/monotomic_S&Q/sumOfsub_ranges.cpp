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

int sumSubarrayMins(vector<int>& nums) {
    vector<int>nsee = nextsmaller(nums);
    vector<int>psee = pse(nums);
    long long total = 0;

    int mod = (int)(1e9+7);
    for(int i =0;i<nums.size();i++){    
        int left = i - psee[i];
        int right = nsee[i] - i;
        total = (total + ( right * left *1ll * nums[i])%mod) %mod;
    }

    return (int)(total);
}

vector<int>nextgreater(vector<int>&nums)
{
    int n= nums.size();
    vector<int>nge(n);
    stack<int>st;
    for(int i= n-1;i>=0;i--){

        while(!st.empty() && nums[st.top()] < nums[i]){
            st.pop();
        }


        nge[i] = st.empty() ? n : st.top();
        st.push(i);
    }

    return nge;
}
vector<int>previous_greater(vector<int>&nums){

    int n= nums.size();
    vector<int> pge(n);
    stack<int>st;

    for(int i=0;i<n;i++){
        
        while(!st.empty() && nums[st.top()] <= nums[i] ){
            st.pop();
        }

        pge[i]= st.empty() ? -1 : st.top();

        st.push(i);
    }

    return pge;
    
}
int sumSubarrayMax(vector<int>& nums) {
    vector<int>nge = nextgreater(nums);
    vector<int>pge = previous_greater(nums);
    long long total = 0;

    int mod = (int)(1e9+7);
    for(int i =0;i<nums.size();i++){    
        int left = i - pge[i];
        int right = nge[i] - i;
        total = (total + ( right * left *1ll * nums[i]) % mod)%mod;
    }

    return (int)(total);
}
int sum_of_sub_ranges(vector<int>&nums){
    int maxi = sumSubarrayMax(nums);
    int mini = sumSubarrayMins(nums);
    return maxi-mini;
}

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];

  cout<<sum_of_sub_ranges(nums)<<" ";
  cout<<"max :"<<sumSubarrayMax(nums)<<" ";
  cout<<"min: "<<sumSubarrayMins(nums);
}