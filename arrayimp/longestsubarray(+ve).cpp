#include<bits/stdc++.h>
using namespace std;

int longest_brute(int arr[], int n, int k) {
    int len = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == k) {
                len = max(len, j - i + 1);
            }
        }
    }
    return len;
}
int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;

    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << longest_brute(arr, n, k);
    return 0;
}