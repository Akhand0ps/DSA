#include<bits/stdc++.h>
using namespace std;

int dutch_national_flag(int arr[],int n){
    int low=0;
    int mid=0;
    int high = n-1;

    while(mid <= high){
        if(arr[mid]== 0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1) mid++;

        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }


}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    dutch_national_flag(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}