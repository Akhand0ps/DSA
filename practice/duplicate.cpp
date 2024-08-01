#include<bits/stdc++.h>
using namespace std;

void dup(int arr[],int n){
    set<int> temp;
    for(int i=0;i<n;i++){
        temp.insert(arr[i]);
    }
    for(auto it:temp) cout<<it<<" ";
    cout<<endl;

    int index =0;
    for(auto it: temp){
        arr[index]  = it;
        index++;
    }
    
    for(int i=0;i<index;i++){
        cout<<i<<" ";
    }
    
    

    
}
int dupp(int arr[],int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j] != arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
   for(int k=0;k<i;k++) cout<<arr[k]<<" ";
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) cin>> arr[i];
    dup(arr,n);
    // for(int i=0;i<n;i++) cout<< arr[i]<<" ";


}