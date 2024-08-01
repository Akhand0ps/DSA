#include<bits/stdc++.h>
using namespace std;

void name(int i,int n){
    if(i>n) return ;
    cout<<"Akhand"<<endl;
    name(i+1,n);
}
void num(int i,int n){
    if(i>n) return ;
    cout<<i<<endl;
    num(i+1,n);
}
void reverse(int i,int n){
    if(i<1) return;
    cout<<i<<" ";

    reverse(i-1,n);
}
void backtracking(int i,int n){
    //print N to 1;
    if(i>n) return;
    backtracking(i+1,n);
    cout<<i<<" ";
}
void sum_parameter(int i,int sum){
    if(i<1){
        cout<<"sum is: "<<sum;
        return;
    }
    sum_parameter(i-1,sum+i);
}
int sum_funtional(int n){
    if(n==0) return 0;
    return n+sum_funtional(n-1);
}
int fact_funtional(int n){
    if(n==0) return 1;
    return n*fact_funtional(n-1);
}
int sum_funtional_1(int n){
    if(n>0)
    {
        return n + sum_funtional_1(n-1);
        n--;
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter no.of times: ";
    cin>>n;
    // name(1,n);
    // num(1,n);
    // reverse(n,n);
    // backtracking(1,n);
    // sum_parameter(n,0);
    // cout<<"sum is: "<<sum_funtional(n);
    // cout<<"factorial of "<<n<< " is: "<<fact_funtional(n);
    cout<<"sum is: "<<sum_funtional_1(n);

    return 0;
}