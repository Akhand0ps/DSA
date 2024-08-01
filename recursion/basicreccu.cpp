#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void pp(){
    if(cnt==3) return;
    else
    cout<<cnt<< " ";
    cnt++;
    pp();
}


int main(){
   
    pp();
    return 0;
}