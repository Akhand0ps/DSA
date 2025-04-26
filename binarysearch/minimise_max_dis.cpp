#include<bits/stdc++.h>
using namespace std;

int numofgS(long double dist,vector<int> &nums){
    int cnt = 0;
    for(int i=1;i<nums.size();i++){
        int num_in_bt = ((nums[i] - nums[i-1])/dist);
        if((nums[i] - nums[i-1]) / dist == num_in_bt* dist){
            num_in_bt--;
        }
        cnt += num_in_bt;
    }

    return cnt;
}

long double minimise_dis(vector<int> &nums,int k){
    int n = nums.size();
    long double low =0;
    long double high  = 0;

    for(int i=0;i<n-1;i++){
        high = max(high , (long double) nums[i+1] - nums[i]);

    }

    long double diff = 1e-6;
    while(high -low > diff){
        long double mid = (low+high)/(2.0);
        int cnt = numofgS(mid,nums);

        if(cnt > k){
            low = mid;

        }
        else{
            high = mid;
        }
    }

    return high;
}
int main(){
    int n;
    cout<<"enter size: ";
    cin>>n;
    int k;
    cout<<"enter Gas stations to place: ";
    cin>>k;

    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];

    long double res =minimise_dis(nums,k);
    cout<<res;
}