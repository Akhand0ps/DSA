#include<bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int>& nums) {
        int n = nums.size();

        int low = 0;
        int high = n-1;
        int ans =-1;
        if(n==1) ans =-1;
        while(low<=high){
            int mid = (low+high)/2;

            if(nums[mid] > nums[mid-1] && nums[mid] >  nums[mid+1]){
                    ans = mid;
            }

            if(nums[mid] > nums[mid-1] && nums[mid] <nums[mid+1]){
                low = mid+1;
            }

            else{
                high = mid-1;
            }
        }

        return ans;
    }

    int main(){
        int n =
    }