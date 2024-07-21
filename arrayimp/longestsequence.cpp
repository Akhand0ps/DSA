#include<bits/stdc++.h>
using namespace std;

bool ls(vector<int> &arr, int num){
    for(int i =0 ;i<arr.size();i++){
        if(arr[i] == num){
            return true;
        }
    }

    return false;
}

int sequence(vector<int> &arr,int n){
    int longest =1;
    for (int i = 0; i < n; i++) {
        int x = arr[i];
        int cnt = 1;
        //search for consecutive numbers
        //using linear search:
        while (ls(arr, x + 1) == true) {
            x += 1;
            cnt += 1;
        }

        longest = max(longest, cnt);
    }

    return longest;
}







int main(){
    int n ;
    cin>>n;
    vector<int> arr(n);


    for(int i =0;i<n;i++) cin>> arr[i];

    cout<<"longest sequence: "<<sequence(arr,n);
}