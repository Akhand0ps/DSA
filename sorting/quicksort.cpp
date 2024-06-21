#include<bits/stdc++.h>
using namespace std;
int partition(vector <int> &arr,int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i] <= pivot && i <=high-1){
        i++;
        }
    
        while(arr[j] >  pivot && j >= low+1){
            j--;
        }
        
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;

}


void sortt(vector<int> &arr,int low,int high){
    if(low<high){
        int pIndex = partition(arr,low,high);
        sortt(arr,low,pIndex-1);
        sortt(arr,pIndex+1,high);
    }
}
void quick(vector <int> &arr, int n){
    sortt(arr,0,n-1);
}
int main(){

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>> arr[i];
    quick(arr,n);
    for(int i=0;i<n;i++) cout<< arr[i]<<" ";



}