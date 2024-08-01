#include<bits/stdc++.h>
using namespace std;

void zerosum(int n,int arr[]){
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]+arr[j]==0){
                
            }
        }
    }
}

int main(){
    int n;
    cout<<"size: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    zerosum(n,arr);
}