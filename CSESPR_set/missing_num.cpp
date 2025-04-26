#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n;

    if(cin>>n && n >= 2){

    
    

    vector<long long>nums(n);
    nums[0]=0;
    for(int i=1;i<n;i++)cin>>nums[i];

    long long sum=0;
    for(int i=0;i<n;i++){

       sum+=nums[i];
    }

    long long nt = (n * (n + 1)) / 2;
        cout<<nt-sum;
    }


    return 0;
}