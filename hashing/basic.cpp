#include<bits/stdc++.h>
using namespace std;
    int hashh[1000000]={0};

int main(){
    int n;  
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        hashh[arr[i]] +=1;
    }
    int q;
    cout<<"how many queries to run: ";
    cin>>q;
    while(q--){
        int num;
        cout<<"Enter no.to find occurance: ";
        cin>>num;
        cout<<hashh[num]<<"times"<<endl;
    }

}