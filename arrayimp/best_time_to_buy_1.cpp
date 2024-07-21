#include<bits/stdc++.h>
using namespace std;

int stock(int arr[],int n){
    int mini = arr[0];
    int profit= 0;
    for(int i=1;i<n;i++){
        int cost = arr[i] - mini;

        profit = max(profit , cost);
        mini = min(mini, arr[i]);
    }

    return profit;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0;i<n;i++){
        cin>> arr[i];
    }

    cout<<stock(arr,n);
    
}