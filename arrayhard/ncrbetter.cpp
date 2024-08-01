#include <bits/stdc++.h>
using namespace std;

void ncr(int n){
    int res= 1;
    cout<<res<<" ";
    for(int i =1;i<n;i++){
        res = res * (n-i);
        res = res / (i);
        cout<<res<<" ";
    }
}




int main() {
    int n = 6;
    ncr(n);
    return 0;
}
