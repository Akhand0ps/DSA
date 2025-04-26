#include<bits/stdc++.h>
using namespace std;

vector<int> rotate(vector<int>&arr,int d){
    
   
    if(d > arr.size())
    {
     d = d%arr.size();
    }
    
    vector<int>ans;
        
        
        for(int i=d;i<arr.size();i++){
            ans.push_back(arr[i]);
        }

        for(int i=0;i<d;i++){
            ans.push_back(arr[i]);
        }
        
        for(int i=0;i<arr.size();i++){
            arr[i] = ans[i];
        }

        return ans;

}

int main(){

    int n;
    cin>>n;
    int d;
    cin>>d;
    vector<int>nums(n);
    for(int i=0;i<n;i++)cin>>nums[i];
    
    vector<int>res =   rotate(nums,d);

    for(auto it:res)cout<<it<<" ";
}