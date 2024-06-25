#include<bits/stdc++.h>
using namespace std;

void lowerbound(int arr[],int n,int x){
    int ind= lower_bound(arr,arr+n,x)-arr;
    if(ind!=n && arr[ind]==x) cout<< ind;
    else cout<< -1;
}
int main(){
    int n;
    cout<<"size :";
    cin>> n;
    int x;
    cout<< "target: ";
    cin>> x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    cout<<" Entered array: ";
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    lowerbound(arr,n,x);
    
}