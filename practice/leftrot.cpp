#include<bits/stdc++.h>
using namespace std;

vector<int> r(vector<int> &arr,int k){
    int n = arr.size();
    if(k<0) return arr;

    k = k%n;

    vector<int> temp(k);
    for(int i =0;i<=k;i++){
        temp.push_back(arr[i]);
    }

    for(int i = k;i<n;i++){
        arr[i-k] = arr[i];
    }

    for(int i = n-k;i<n;i++){
        arr[i] = temp[i-(n-k)];
    }

return arr;
}

int main(){
    int n ;
    cin>>n;
    int k;
    cin>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    vector<int> res = r(arr,k);
    for(auto &it:res){
        cout<<it<<" ";
    }
}