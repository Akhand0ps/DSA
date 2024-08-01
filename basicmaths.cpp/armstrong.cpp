#include<bits/stdc++.h>
using namespace std;
bool armstrong(int n){
    int sum =0;
    int dup=n;
    int temp=n;
    // int x=n;
    // int x=dup;
    int cnt=0;
    while(temp>0){
        cnt +=1;
        temp=temp/10;
    }
    while(dup>0){
        int ld = dup%10;
        sum =sum+pow(ld,cnt);
        dup = dup/10;
    }
    
   return sum==n;
    // cout<<sum;
    // return sum;
}

int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    if(armstrong(n)) cout<<"true";
    else cout<<"false";
    return 0;
}