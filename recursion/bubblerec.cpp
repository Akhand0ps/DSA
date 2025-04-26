#include<bits/stdc++.h>
using namespace std;

void bubble(int arr[], int n){
    if(n==1) return;
    int didswap=0;
    for(int i=0;i<=n-2;i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i+1],arr[i]);
            didswap=1;
        }
    }
    if(didswap==0) return; // hence , by adding this we got TC from O(n^2) to O(n) and SC->> O(n)(auxilary stack space)
    bubble(arr,n-1);
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++) cin>> arr[i];
    bubble(arr,n);
    for(int i =0;i<n;i++) cout<< arr[i]<<" ";



}