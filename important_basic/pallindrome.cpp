#include<bits/stdc++.h>
using namespace std;

bool check_pallindrome(int num){

    if(num < 0 ) return false;

    int dup = num;

    int reverse_num = 0;
    while(num > 0){
        int last_digit = num%10;


        reverse_num = (reverse_num * 10)+ last_digit;

        num = num/10;
    }

    return dup == reverse_num;
}

int main(){
    int n;
    cin>>n;

    check_pallindrome(n);
   
}