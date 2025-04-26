#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"size: ";
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)cin>>nums[i];

//prefix
    // vector<int>prefix(n);
    // prefix[0] = nums[0];
    // for(int i=1;i<n;i++){

    //     prefix[i] = max(prefix[i-1],nums[i]);
    // }
    // cout<<"prefix: ";
    // for(int i=0;i<n;i++)cout<<prefix[i]<<" "; 
    // cout<<endl;

// no need of prefix



    vector<int>suffix(n);
    suffix[n-1] = nums[n-1];
    for(int i=n-2;i>=0;i--) suffix[i] = max(suffix[i+1],nums[i]);
    
    int total =0;
    int last_max = nums[0];
    for(int i=0;i<n;i++){
         last_max = max(last_max, nums[i]);
        
        if(nums[i] < suffix[i] ){

            total += min(last_max,suffix[i]) - nums[i];
        }
    }


    cout<<total;
    
    
}