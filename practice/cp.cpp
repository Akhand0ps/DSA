#include <bits/stdc++.h>
using namespace std;

int sum_digit(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

void res(vector<int>& nums) {
    int n = nums.size();
    vector<pair<int, int>> mpp;

    // Calculate sum of digits and store (sum, index) pairs
    for (int i = 0; i < n; i++) {
        int sum = sum_digit(nums[i]);
        mpp.push_back({ sum, i });
    }

    // Sort pairs based on sum (first element of pair)
    sort(mpp.begin(), mpp.end());

    // Create a temporary array to hold sorted nums
    vector<int> sorted_nums(n);

    // Reorder nums based on sorted indices from mpp
    for (int i = 0; i < n; i++) {
        sorted_nums[i] = nums[mpp[i].second];
    }

    // Print the sorted nums array
    for (int i = 0; i < n; i++) {
        cout << sorted_nums[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    res(nums);

    return 0;
}
