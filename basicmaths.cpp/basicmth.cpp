#include<bits/stdc++.h>
using namespace std;
//extract any digits from numbers
int digitEx(int n){
    int count=0;
    int rv=0;
    int dup=n;
    int sum=0;
    //int cnt= log10(n)+1;
    while(n>0){
        int ld = n%10;
        // cout<<lastdigit<<" ";
        // count +=1;
        rv=(rv*10)+ld;
        n=n/10;
    }
    if(dup==rv) cout<<"true";//pallindrome
    else cout<<"false"; //to check pallindrome.
    // cout<<rv;     
    // return rv;
}

int main(){
    int n;
    cout<<"Number :";
    cin>>n;
    digitEx(n);
    
    return 0;
}