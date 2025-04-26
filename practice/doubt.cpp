// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i =0;i<n;i++) cin>>arr[i];

//     reverse(arr,arr+n);
//     for(int i =0;i<n;i++) cout<<arr[i]<<" ";

    
// }
// You are using GCC
#include<bits/stdc++.h>

using namespace std;


void merge(int a[],int b[],int n,int m){
    
    
    for(int i=0;i<m;i++){
        a[i] += b[i];
    }
    
    int low =0;
    int high = n-1;

    // reverse(a,a+n);
    while(low < high){
        int temp = a[low];
        
        a[low] = a[high];
        
        a[high] = temp;
        
        low++;
        high--;
    }
    
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    
    
}

int main(){
    int n,m;
    cin>>n>>m;
    
    int a[n];
    for(int i =0;i<n;i++) cin>>a[i];
    
    int b[m];
    for(int i =0;i<m;i++) cin>>b[i];
    
    merge(a,b,n,m);
    
    return 0;
    
    
}