#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};

    n=7;
    
    arr[6]=6;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
cout<<endl;
    vector<int>nums;
    for(int i=1;i<n;i++){
        nums.push_back(i);
    }

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    // for(auto it:nums) cout<<it<<" ";
}