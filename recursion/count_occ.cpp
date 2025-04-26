#include<bits/stdc++.h>
using namespace std;

   0 1 2 3  4 5  6   7
// 2 8 8 8- 8 8 11 13 

int first_occ(vector<int>&nums,int k){
    int n= nums.size();
    sort(nums.begin(),nums.end());

    int low = 0;
    int high = n-1;
    int cnt =0;

    int first=-1;
    while(low<= high){
        int mid = (low+high)/2;

        if(nums[mid] == k){
            first = mid;
            high=mid-1;
        }
        else if(nums[mid]<k){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }

    return first;
}

int last_occ(vector<int>&nums,int k){
    int n= nums.size();
    sort(nums.begin(),nums.end());

    int low = 0;
    int high = n-1;
    int cnt =0;

    int last=-1;
    while(low<= high){
        int mid = (low+high)/2;

        if(nums[mid] == k){
            last = mid;
            low=mid+1;
        }
        else if(nums[mid]<k){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }

    return last;

}
// }
// int count_oc(vector<int>&nums,int k){

//     int n= nums.size();
//     sort(nums.begin(),nums.end());

//     int low = 0;
//     int high = n-1;
//     int cnt =0;

    //NOTE: FIRST OCC
    // int first=-1;
    // while(low<= high){
    //     int mid = (low+high)/2;

    //     if(nums[mid] == k){
    //         first = mid;
    //         high=mid-1;
    //     }
    //     else if(nums[mid]<k){
    //         low = mid+1;
    //     }
    //     else{
    //         high = mid-1;
    //     }
    // }

    // return first;

    // NOTE LAST OCC
    // int last=-1;
    // while(low<= high){
    //     int mid = (low+high)/2;

    //     if(nums[mid] == k){
    //         last = mid;
    //         low=mid+1;
    //     }
    //     else if(nums[mid]<k){
    //         low = mid+1;
    //     }
    //     else{
    //         high = mid-1;
    //     }
    // }

    // return last;

    //NOTE: FIND OCC OR NUMBER
    // USE LAST - FIRST +1 

    // int first=-1;
    // while(low<= high){
    //     int mid = (low+high)/2;

    //     if(nums[mid] == k){
    //         first = mid;
    //         high=mid-1;
    //     }
    //     else if(nums[mid]<k){
    //         low = mid+1;
    //     }
    //     else{
    //         high = mid-1;
    //     }
    // }

    
    // low =0;
    // high = n-1;
    // int last=-1;
    // while(low<= high){
    //     int mid = (low+high)/2;

    //     if(nums[mid] == k){
    //         last = mid;
    //         low=mid+1;
    //     }
    //     else if(nums[mid]<k){
    //         low = mid+1;
    //     }
    //     else{
    //         high = mid-1;
    //     }
    // }

    // return last-first+1;

//}

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    int k;
    cin>>k;
    cout<<first_occ(nums,k)<<" ";
    cout<<last_occ(nums,k);
}


/// vector
/// convert in ll
/// call first and last



22 34 5 5 5
cnt = 0;

while(temp){
    cnt++;
    if(temp->data == target){
        cnt;
    }
    temp = temp->next;
    
}
