#include<bits/stdc++.h>
using namespace std;
int slargest(int arr[],int n){
    int largest= arr[0];
    int slargest= INT_MIN;

    for(int i=1;i<n;i++){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > slargest){
            slargest = arr[i];
        }
    } 
    
    return slargest;
}
int secondsmallest(int arr[],int n){
    int smallest = arr[0];
    int s_smallest = INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i] < smallest){
            s_smallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] != smallest && arr[i] < s_smallest){
            s_smallest = arr[i];
        }
    }
    
     return s_smallest;
}
int main(){
    int n=5;
    int arr[n]= {1,5,6,3,8};
   
    cout<<secondsmallest(arr,n);
}