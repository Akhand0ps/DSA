#include<bits/stdc++.h>
using namespace std;

//linear search
int missing_linear(int arr[],int n){
    //taking O(n^2)
    for(int i=1;i<n;i++){
        int flag=0;
        for(int j=0;j<n-1;j++){
            if(arr[j]== i){
                flag =1;
                break;
            }
        }
        if(flag==0){
            return i;
        }
    }
    return -1;
    
}
int missing_hashing(int arr[],int n){
    int hash[n+1] = {0};
    for(int i=0;i<n-1;i++){
        hash[arr[i]]=1;
    }
    
    for(int i=1;i<n;i++){
       if(hash[i] == 0){
        return i;
       }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>> arr[i];
    cout<<missing_hashing(arr,n);
    

}