#include<bits/stdc++.h>
using namespace std;
int index= 0;
int dup(int arr[],int n){
    

    for(int i=1;i<n;i++){
        if(arr[i] != arr[index]){
            arr[index+1]=arr[i];
            index++;
            cout<<index<<" ";
            

        }
    }
    cout<<endl;
    // cout<<index+1;
    return (index+1);
}
int main(){
    int n= 5;
    int arr[n] ={1,1,2,2,3};

    dup(arr,n);
    for(int i=0;i<index+1;i++) cout<< arr[i]<<" ";
    cout<<endl;
    cout<<index+1;
}