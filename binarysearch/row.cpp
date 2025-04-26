#include<bits/stdc++.h>
using namespace std;

int rowWithMax1s(vector<vector<int> > &nums) {
        // code here
        int n= nums.size();
        int m= nums[0].size();
        
        int ind =-1;
        
        int max_cnt=-1;
        for(int i=0;i<n;i++){
            int cnt_row = 0;
            for(int j=0;j<m;j++){
                
                if(nums[i][j] == 1){
                    cnt_row += nums[i][j];
                }
                
                if(cnt_row > max_cnt){
                    max_cnt = cnt_row;
                    ind = i;
                }
            }
        }
        
        return ind;
        
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>nums(n,vector<int>(m));

    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>>nums[i][j];

    return res(nums);


    
}
