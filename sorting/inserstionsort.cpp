#include<bits/stdc++.h>
using namespace std;
// TC= O(N);
void insertion(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
            cout<<"runs"<<endl;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    insertion(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

}