#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums = {1,2,5,9};

    long long div = 5;

    double sum =0; double divide_num =0;

            for(int i=0;i<nums.size();i++){
                divide_num = ceil(((double)nums[i]/(double)div)); 
                 sum += divide_num;
            }

            // for(int i=0;i<nums.size();i++) cout<<nums[i]<<" "; 

        cout<<sum;

}