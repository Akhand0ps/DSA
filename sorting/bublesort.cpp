#include<bits/stdc++.h>
using namespace std;

void bubble(int arr[],int n){
    for(int i=n-1;i>=1;i--){
        int didswap=0; // reduces O(N^2) to O(N)
            for(int j=0;j<=i-1;j++){
                if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                 didswap=1;
                }
    }
    if(didswap==0){
        break;
    }
    cout<<"all clear"<<endl;
   }       
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    bubble(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

}