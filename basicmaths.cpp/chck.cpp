#include<bits/stdc++.h>
using namespace std;
 int reverse(int x) {
        int rv=0;
        while(x>0){
            int ld= x%10;
            if (rv > INT_MAX / 10 || (rv == INT_MAX / 10 && ld > 7)) return 0;

            if (rv < INT_MIN / 10 || (rv == INT_MIN / 10 && ld < -8)) return 0;

            rv = (rv*10)+ld;
            
            x=x/10; 
        }

    cout<< rv;
    return rv;
    
 }
 int main(){
    int x;
    cin>>x;
    reverse(x);
 }
