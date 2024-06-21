#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    vector<bool> hash(n,false);

    for(bool x:hash){
        cout<<x<<" ";
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;i++){
            if(arr[i]==arr[j]){
                arr[j]=hash[i];
            }
        }
    }

    for(int j=0;j<n;j++) cout<<arr[j];


    cout<<endl;
}