#include<bits/stdc++.h>

using namespace std;


int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;

    //pre compute
    //if we aksed about lowercase alphabets ->> take has[26] elsee take hash[256]
    // int hash[26] ={0};
    // for(int i=0;i<s.size();i++){
    //     hash[s[i] - 'a']++;
    // }
 // now if lowercase doesnt specified
    int hash[256] ={0};
    for(int i=0;i<s.size();i++){ // it autocasts the int into ASCII value
        hash[s[i]]++;
    }
    //fetch
    int query;
    cout<<"Kinte bar chlega: ";
    cin>>query;
    while(query--){
    char ch;
    cout<<"Enter char to find occ: ";
    cin>>ch;

    //cout<<hash[ch - 'a']<<endl;
    cout<<hash[ch]<<endl;
    }
    return 0;
}