#include<bits/stdc++.h>
using namespace std;

vector<int>nextgreater(vector<int>&nums)
{
    int n= nums.size();
    vector<int>nge(n);
    stack<int>st;
    for(int i= n-1;i>=0;i--){

        while(!st.empty() && nums[st.top()] <= nums[i]){
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
        vector<int>pge= previous_greater(nums);
        long long total = 0;

        int mod = (int)(1e9+7);
        for(int i =0;i<nums.size();i++){    
            int left = i - nge[i];
            int right = pge[i] - i;
            total = (total + ( right * left *1ll * nums[i]));
            total = total%mod;
        }

        return (int)(total);
    }

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)cin>>nums[i];

    cout<<sumSubarrayMax(nums);
}