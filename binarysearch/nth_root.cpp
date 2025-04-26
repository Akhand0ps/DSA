#include<bits/stdc++.h>
using namespace std;

int sq(int i,int n){  // Set i = 1, n = 4
    
    int result = 1;

    for (int j = 0; j < n; j++) {
        result *= i;  // Multiply result by i, n times
    }

    return result;
}

int main(){
    int n;
    int m;
    cin>>n>>m;
    int ans =-1;

    for(int i=1;i<m;i++){
        if(sq(i,n)==m){
            ans = i;
        }
        else if(sq(i,n) > m){
            break;
        }
    }
cout<<ans;
    
}

