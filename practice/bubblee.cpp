#include<bits/stdc++.h>
using namespace std;

void bubble(int arr[],int n){
    for(int i=n-1;i>=1;i--){
        int didswp=0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                didswp=1;
            }
            if(didswp==0){
                cout<<"Already sorted"<<endl;
                break;
            }
        }
    }

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    bubble(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;

}