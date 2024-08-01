#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={2,4,6,8,3};
    int size = sizeof(arr)/sizeof(arr[0]);

    swap(size,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}