#include<bits/stdc++.h>
using namespace std;

int countdigits(int num){

    int cnt =0;

    while(num != 0){
        num /= 10;
        cnt++;
    }

    return cnt;
}

bool arm_check(int num){
    int dup = num;
    int total_digits = countdigits(num);

    int sum =0;

    while(num >0){
        int ld = num%10;

        int power = 1;
        for(int i=0;i<total_digits;i++){
            power *= ld;
        }

        sum += power;
        num /=10;
    }

    return dup==sum;

}

int main(){
    int n;
    cin>>n;

    if(arm_check(n) == true) cout<<"yes it is.";
    else cout<<"No! its not";
   
}