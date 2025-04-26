#include<bits/stdc++.h>
using namespace std;
int cnt =1;
void toh(int n,int A,int B,int C){

    if( n >0){
        toh(n-1,A,C,B);
        cout<<"Step "<<cnt++<<":"<<" Move a Disc from "<<A<<" to "<<C<<endl;
        toh(n-1,B,A,C);
    }
}

int main(){
    int n;
    cout<<"Enter Number of discs: ";
    cin>>n;
    toh(n,1,2,3);
    
}