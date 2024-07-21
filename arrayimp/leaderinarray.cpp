#include<bits/stdc++.h>
using namespace std;

vector<int> leader(vector<int> &arr){
    int n = arr.size();

    int maxi = arr[n-1];
    vector<int> ans;
    ans.push_back(maxi);
    for(int i = n-2;i>=0;i--){
        if(arr[i] > maxi){
            ans.push_back(arr[i]);
            
        }
        maxi = max(maxi,arr[i]);
    }

    return ans;
}
int main(){
    int n ;
    cin>>n;
    vector<int> arr(n);


    for(int i =0;i<n;i++) cin>> arr[i];

    vector<int> res = leader(arr);

    // always use iteration for getting actual size of retured value. to avoid garbage values.
    for(auto it:res) cout<<it<<" ";
}