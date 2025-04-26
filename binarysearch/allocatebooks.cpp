#include<bits/stdc++.h>

using namespace std;

int maxi(vector<int> &nums){
    int max_el = INT_MIN;

    for(int i=0;i<nums.size();i++){
        if(nums[i] > max_el){
            max_el = nums[i];
        }
    }
    return max_el;
}

int sumi(vector<int> &nums){
    int sum = 0;
    for(int i=0;i<nums.size();i++){
        sum += nums[i];
    }

    return sum;
}

int no_of_stu(vector<int> &nums,int pages){
    int student = 1;
    int pages_now=0;


    for(int i=0;i<nums.size();i++){
        if((nums[i] + pages_now) <= pages){
            pages_now += nums[i];
        }
        else{
            student++;
            pages_now = nums[i];
        }
    }

    return student;
}
int pages(vector<int> &nums,int students){
    
    if(students > nums.size()) return -1;

    int low = maxi(nums);// 
    int high = sumi(nums);
    int ans =-1;
    for(int i=low;i<high;i++){
        if(no_of_stu(nums,i) <= students){
            ans = i;
            break;
        }
    }

    return ans;
}

int main(){
    int n;
    cin>>n;
    int stu;
    cin>>stu;
    vector<int> books(n);
    for(int i=0;i<n;i++) cin>>books[i];

    cout<<pages(books,stu);
}