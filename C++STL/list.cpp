#include<bits/stdc++.h>
using namespace std;
void explainList(){
    list<int>ls;
    ls.push_back(1);
    ls.emplace_back(4);
    ls.push_front(5);
    // ls.emplace_front({2,4});
    for(auto it:ls){
        cout<<it<<" ";
    }
    
}

int main(){
    explainList();
}