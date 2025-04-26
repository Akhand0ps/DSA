#include<bits/stdc++.h>
using namespace std;

int main(){

    bool compare()
    
    int n;
    vector<int>nums;

    while(cin>>n){
        if(n==-1)break;

        nums.push_back(n);
    }

    for(auto it:nums)cout<<it<<" ";
    cout<<endl;

    priority_queue<int>maxheap;

    for(auto it:nums){
        maxheap.push(it);
    }

    while(!maxheap.empty()){
        cout<<maxheap.top()<<" ";
        maxheap.pop();

    }
}