#include<bits/stdc++.h>
using namespace std;

int back(int n){
    if(n==1) return 1;

    return n+back(n-1);
}
int back_1(int n){
    if(n==1) return n;
    return n+back_1(n-1); 
}
int main(){
    int n;
    cin>>n;
    cout<<"sum is: "<<back(n)<<endl;
    cout<<"sum is: "<<back_1(n);
}
// both returns works same. lets see!!!