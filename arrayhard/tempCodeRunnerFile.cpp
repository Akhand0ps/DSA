#include<bits/stdc++.h>
using namespace std;

void ncr(int n){
    int res = 1;
    for(int i=1;i<n;i++){
        res = res *(n-i);
        res = res / i;