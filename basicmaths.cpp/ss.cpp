#include<bits/stdc++.h>
using namespace std;

void sumofdivisors(int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if(n%i==0){
            sum +=i;
        }
    }
   cout<<sum;
    // return sum;   
}
int main(){
    int n;
    cin>>n;
    sumofdivisors(n);
    return 0;
}