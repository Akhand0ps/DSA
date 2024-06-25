#include<bits/stdc++.h>
using namespace std;
 void sortt(int arr[]){
    sort(arr+2,arr+4);
    for(int i=0;i<4;i++){
      cout<< arr[i]<<" ";
    }
 }
 int main(){
    int arr[5]={1,3,7,5};
    sortt(arr);
   return 0;
 }