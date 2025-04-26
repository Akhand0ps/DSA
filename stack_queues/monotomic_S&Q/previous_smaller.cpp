#include<bits/stdc++.h>
using namespace std;
// tc ->> O(n^2)
// vector<int>previous_smaller(vector<int>&nums){
// // 4 5 2 10 8
//     int n= nums.size();
//     vector<int>pse(n);
//     pse[0] = -1;
//     for(int i=1;i<n;i++){

//         for(int j = i-1;j>=0;j--){
//             if(nums[j] <nums[i]){
//                 pse[i] = (nums[j]);
//                 break;
//             }
//             else{
//                 pse[i]= -1;
//             }
//         }
//     }

//     return pse;
// }

// optimal

vector<int>PSE(vector<int>&nums){
    stack<int>st;

    int n = nums.size();
    vector<int>nse(n);
    for(int i=0;i<n;i++){

        while(!st.empty() && st.top()>= nums[i]){
            st.pop();
        }
        nse[i] = st.empty() ? -1 : st.top();
        st.push(nums[i]);
    }

    return nse;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)cin>>nums[i];

    vector<int> ans = PSE(nums);
    for(auto it:ans)cout<<it<<" ";
}