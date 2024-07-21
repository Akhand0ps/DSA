#include<bits/stdc++.h>
using namespace std;


// two variety question
// 1-> return a+b == target possible or not
// 2-> return indices of those a and b .

// 1st;

string sum_brute(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] + arr[j] == target){
                return "YES";
            }
        }

    }

    return "NO";
}

// better solution using map;
// we'll get indices also(best optiomal code for indices due to is S.C)

vector <int> sum_better(vector <int> &arr,int n,int target){
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        int a=arr[i];
        int more = target - a;

        if(mpp.find(more) != mpp.end()){
            return {mpp[more], i};

            // return "YES";
        }
        mpp[a] = i;
    }
    return {-1,-1};
}

// optimal solution
// 2 pointer
// first sort the array
string sum_optimal(vector<int> arr,int n ,int target)
{
    // Write your code here.
    sort(arr.begin(),arr.end());
    int left=0;
    int right = n-1;

    while(left < right){
        int sum = arr[left] + arr[right];
        if(sum == target){
            return "YES";
        }
        else if(sum < target) left++;
        else right--;
        

    }

    return "NO";
}

int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector <int> arr(n);
    for(int i =0;i<n;i++)cin>>arr[i];

    // vector<int> ans = sum_better(arr,n,target);
    // cout << "This is the answer for variant 2: [" << ans[0] << ", "<< ans[1] << "]" << endl;

    string check = sum_optimal(arr,n,target);
    cout<<check;
    
}