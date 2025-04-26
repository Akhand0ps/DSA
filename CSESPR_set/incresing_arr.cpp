#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin>>n;

    vector<int>nums(n);
    for(int i=0;i<n;i++)cin>>nums[i];
    long long  cnt=0;
    for(int i=0;i<n-1;i++){

        if(nums[i] > nums[i+1]){
            long long  x = nums[i];
            long long  y = nums[i+1];
            nums[i+1] = x;
            cnt +=  x-y;
        }
    }


    cout<<cnt;
    
}

// 3 2 5 1 7
// 3 3 5  5 7
// 1+4 = 5

// input
// 10
// 1000000000 1 1 1 1 1 1 1 1 1

// correct output
// 8999999991

// user output
// 410065399


