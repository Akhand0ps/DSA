#include<bits/stdc++.h>
using namespace std;

void print(int n){
    // 1 to N
    if(n==1){
        cout<<1<<" ";
        return;
    }

    print(n-1);
    cout<<n<<" ";
}

void print_N_to_1(int n){
    // N to 1
    if(n==1){
        cout<<1<<" ";
        return;
    }
    cout<<n<<" ";
    print(n-1);
    
}

int main(){

    int n;
    cin>>n;
    print(n);
    cout<<endl;
    print_N_to_1(n);
}