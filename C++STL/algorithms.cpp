#include<bits/stdc++.h>
using namespace std;

void sortt(int arr[],int n){
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    int maxi =*max_element(arr,arr+n);
    cout<< maxi;
}

int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    sortt(arr,n);
    cout<<endl;
    
    cout<<endl;
    int num =6;
    int cnt = __builtin_popcount(num); // gives count of one's
    cout<< cnt;
     return 0;

   

}