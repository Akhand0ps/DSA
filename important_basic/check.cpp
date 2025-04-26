#include<bits/stdc++.h>
using namespace std;
// int fact(int num){
//     if(num == 0 || num==1) return 1;

//     int result = 1;

//     for(int i=2;i<=num;i++){
//         result  = result * i;
//     }

//     return result;
// }

int factorial(int num){
    if(num == 0 || num==1) return 1;

    else 
    return num*factorial(num-1);
}
int main(){
    
    int n;
    cin>>n;
    
    if(n < 0) cout<<"invalid input";
    else cout<<"factorial of "<<n<<": "<<factorial(n);
    

}