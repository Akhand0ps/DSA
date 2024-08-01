#include<bits/stdc++.h>
using namespace std;

void primenum(int n){
    // if(n<=1) cout<< " not prime";
    int cnt=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cnt++;
            if((n/i) != i){
                cnt++;
            }
        }
    }

    if(cnt == 2) cout<<"Prime";
    else cout<< "NOt prime";
}

int main(){
    int n;
    cin>>n;
    primenum(n);
    return 0;
}

// void primenum(int n) {
//     if (n <= 1) {  // Added this block to handle edge cases
//         cout << "Not prime";  // Corrected typo
//         return;
//     }

//     int cnt = 0;
//     for (int i = 1; i * i <= n; i++) {
//         if (n % i == 0) {
//             cnt++;
//             if ((n / i) != i) {
//                 cnt++;
//             }
//         }
//     }

//     if (cnt == 2) {
//         cout << "Prime";
//     } else {
//         cout << "Not prime";  // Corrected typo
//     }
// }
