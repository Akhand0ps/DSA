#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;

    int dup = num;

    int reverse_num = 0;

    while(num>0){
        int last__digit =  num%10;

        reverse_num = (reverse_num * 10) + last__digit;
        num = num/10;
    }

    if(dup == reverse_num) cout<<"true";
    else cout<<"false";
}