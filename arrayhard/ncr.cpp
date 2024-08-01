#include<bits/stdc++.h>
using namespace std;
// print particular element
// print nth row 
// print whole pascal triangle

int ncr(int n,int r){
    int res = 1;
    for(int  i= 0;i<r;i++)
    {
        res = res * (n-i);
        res = res / (i+1);
    }
    
    return res;
} 
// now print nth row 
void nth_row(int n){
    for(int c = 1;c<=n;c++){
        cout<<ncr(n-1,c-1)<<" ";
    }
    
}
int main(){

    int n=6;

   nth_row(n);
    
}