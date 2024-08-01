#include <bits/stdc++.h>
using namespace std;

void swapIfGreater(vector<long long>& arr1, vector<long long>& arr2, int ind1, int ind2) {
    if (arr1[ind1] > arr2[ind2]) {
        swap(arr1[ind1], arr2[ind2]);
    }
}

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long>& a, vector<long long>& b) {
    int n = a.size();
    int m = b.size();
    int len = n + m;
    int gap = (len + 1) / 2;

    while (gap > 0) {
        int left = 0;
        int right = left + gap;

        while (right < len) {
            if (left < n && right >= n) {
                swapIfGreater(a, b, left, right - n);
            } else if (left >= n) {
                swapIfGreater(b, b, left - n, right - n);
            } else {
                swapIfGreater(a, a, left, right);
            }
            left++;
            right++;
        }

        if (gap == 1) break;
        gap = (gap + 1) / 2;
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<long long> a(n);
    vector<long long> b(m);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    mergeTwoSortedArraysWithoutExtraSpace(a, b);

    for (auto it : a) {
        cout << it << " ";
    }

    for (auto it : b) {
        cout << it << " ";
    }

    cout << endl;

    return 0;
}
