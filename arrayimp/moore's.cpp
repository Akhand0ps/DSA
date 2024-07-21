#include<bits/stdc++.h>
using namespace std;


int majorityElement(vector<int>& nums) {
        //T.C ->> O(N) + O(N)
        // S.C ->> O(1)
        int n= nums.size();
        int cnt=0;
        int el;

        for(int i=0;i<n;i++){
            if(cnt ==0){
                cnt = 1;
                el = nums[i];
            }
            else if(nums[i]  == el){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        
        // get maximum count of majority element
        int cntreal =0;
        for(int i=0;i<n;i++){
            if(nums[i] == el){
                cntreal++;
            }
        }

        if(cntreal > n/2){
            return el;
        }

        return -1;
        
    }

    int main(){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<nums.size();i++)cin>>nums[i];
        int check =majorityElement(nums);
        cout<<check;
    }