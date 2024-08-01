#include<bits/stdc++.h>
using namespace std;
void printdivisor(int n){
    vector<int> ls;
    // O(sqrt(n))
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            ls.push_back(i);
            if((n/i) !=i){
                ls.push_back(n/i);
            }
        }
    }
    //O(no of factors * log n): n is the number of factoros not actual number
    sort(ls.begin(),ls.end());
    // O(no of factors)
    for(auto it: ls) cout<< it << " ";
}
int main(){
    int n;
    cin>>n;
    printdivisor(n);
    return 0;
}