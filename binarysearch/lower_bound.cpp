#include<bits/stdc++.h>

using namespace std;

int bs(vector<int> &arr,int x){
    int n = arr.size();

    int low=0;
    int high = n-1;

    int ans = n;

    while(low <= high){
        int mid =(low+high)/2;

        if(arr[mid] > x){
            ans = arr[mid];

            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }

    return ans;

    
}

int main(){

    int n;
    cin>>n;

    int x;

    cin>>x;

    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<bs(arr,x);
}