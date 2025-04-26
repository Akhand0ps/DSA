// You are using GCC
#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++) cin>>nums[i];
        for(int i=0;i<n;i++) cout<<nums[i]<<" ";
        cout<<endl;
        
    } 
}