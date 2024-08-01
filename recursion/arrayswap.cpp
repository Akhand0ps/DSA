#include<bits/stdc++.h>
using namespace std;

void a_swap(int i,int arr[],int n){
    if(i>=n/2) return;

    swap(arr[i],arr[n-i-1]);
    a_swap(i+1,arr,n);
}
void b_swap(int m,int arr[],int n){
    if(m>=n) return;
    swap(arr[m],arr[n-1]);
    b_swap(m+1,arr,n-1);
}
bool p(int i, string &s){
    if(i>=s.size()/2) return true;
    if(s[i] !=s[s.size()-i-1]) return false;

    return p(i+1,s);
}
int fib(int n) {
        if(n<=1) return n;
       //int last= fib(n-1);
       // int slast = fib(n-2);

        return fib(n-1)+fib(n-2);
    }
int main(){
    int n;
    cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++) cin>>arr[i];
    // // a_swap(0,arr,n);
    // // b_swap(0,arr,n);
    // for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<fib(n);
    // string s="MAdAM";
    // cout<<p(0,s);
    return 0;

}