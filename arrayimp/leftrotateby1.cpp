#include<bits/stdc++.h>
using namespace std;

void left_by_1(int arr[],int n){
    int temp =arr[0];
    for(int i=1;i<n;i++){
        
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    for(int j=0;j<n;j++) cout<< arr[j]<<" ";
}
void left_by_6(int arr[],int n){
    int temp = arr[n-1];
    for(int i=0;i<n;i++){
        if(i<=n){
        arr[i+1] = arr[i];
        }
    }
    arr[0] = temp;
    for(int j=0;j<n;j++) cout<<arr[j] <<" ";
    cout<<arr[3];
}




int main(){
    int n;
    cin>>n;
    cout<<endl;
    int k;
    cout<<"No.of rotations: ";
    cin>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>> arr[i];
    rotate(arr,k);
}