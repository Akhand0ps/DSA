#include<bits/stdc++.h>
using namespace std;

void ealgo(int a,int b){
    while(a>0 && b>0){
        if (a>b) {
            a=a%b;
        }
        else {
        b = b%a;
        }
    }
    if(a==0) cout<<"gcd is: "<<b;
    else cout<<"gcd is: "<<a;
}
int main(){
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    ealgo(a,b);
    return 0;
}