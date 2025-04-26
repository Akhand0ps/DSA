#include<bits/stdc++.h>
using namespace std;

bool matrixcheck(vector<vector<int>> &arr, int n, int m) {
    vector<int> temp = {1, 2, 3};
    

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (find(temp.begin(), temp.end(), arr[i][j]) != temp.end()) {
                return true;
            } else {
                return false;
            }
        }
    }
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    
     bool result = matrixcheck(arr, n, m);
    cout << (result ? "True" : "False") << endl;


    return 0;
}



