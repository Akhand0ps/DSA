#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //pre-compute
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    // map prints in sorted manner
    for(auto it:mpp){
        cout<<it.first<<","<<it.second<<endl;
    }

    int query;
    cin>>query;
    while(query--){
    int num;
    cin>>num;
    //fetch
    cout<<mpp[num]<<" time"<<endl;
    }
}