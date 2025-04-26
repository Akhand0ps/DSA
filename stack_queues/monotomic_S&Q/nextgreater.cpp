#include<bits/stdc++.h>
using namespace std;

vector<int>nextgreater(vector<int> &nums){
    stack<int>st;
    vector<int>NGE(nums.size());

    for(int i=nums.size()-1;i>=0;i--){
        // remove smaller from the stack
        while(!st.empty() && st.top() <= nums[i]){
            st.pop();
        }

        if(st.empty()) NGE[i] = -1;
        
        else{
            NGE[i] = st.top();
        }
        st.push(nums[i]);
    }

    return NGE;
}

int main(){

    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];

    vector<int> res  = nextgreater(nums);
    for(auto it:res) cout<<it<<" ";
}