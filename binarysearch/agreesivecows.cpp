// #include <bits/stdc++.h>
// using namespace std;

// bool can_we_place(vector<int> &nums,int dist,int cows){
//     int cnt_cows =1;
//     int last = nums[0];
//     for(int i=1;i<nums.size();i++){
//         if(nums[i] - last >= dist){
//             cnt_cows++;
//             last = nums[i];
//         }
//         if(cnt_cows >= cows) return true;
//     }
    
//     return false;
// }


// int aggressiveCows(vector<int> &stalls, int k)
// {
    

//     sort(stalls.begin(),stalls.end());
//     int n = stalls.size();
//     int low = 1;
//     int high = stalls[n-1] - stalls[0];

//     while(low  <= high){
//         int mid = low + (high - low)/2;

//         if(can_we_place(stalls,mid,k)== true){
//             low = mid+1;
//         }
//         else{
//             high = mid-1;
//         }    
//     }

//     return high;

// }

// int main() {
	
// 	// your code here
// 	int n;
// 	cin>>n;
// 	int cows;
// 	cin>>cows;
// 	vector<int> nums(n);
// 	for(int i=0;i<n;i++) cin>>nums[i];
	
	
// 	cout<<aggressiveCows(nums,cows);

// 	return 0;
// }


#include <bits/stdc++.h>
using namespace std;

bool can_we_place(vector<int> &nums, int dist, int cows) {
    int cnt_cows = 1;
    int last = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] - last >= dist) {
            cnt_cows++;
            last = nums[i];
        }
        if (cnt_cows >= cows) return true;
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k) {
    sort(stalls.begin(), stalls.end());
    int low = 1;
    int high = stalls[stalls.size() - 1] - stalls[0];

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (can_we_place(stalls, mid, k)) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return low - 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, cows;
    cin >> n >> cows;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    cout << aggressiveCows(nums, cows);

    return 0;
}
