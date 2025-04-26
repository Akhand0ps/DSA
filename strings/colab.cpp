// You are using GCC
#include<bits/stdc++.h>
using namespace std;

char change(char s){
    char ch;
    if(s >= 'A' && s<= 'Z'){
         ch = s -'A'+'a';
        
    }
    else if(s == ' '){
        char ch = ' ';
        
    }
    else{
         ch = s+'A'-'a';
        
    }
    
    return ch;
}

void inverted(string &str)
{
    int n = str.length();
    string ans;
    for(int i=0;i<n;i++){
        ans.push_back(change(str[i]));
    }
    cout<<"Inverted String: ";
    for(auto it:ans)cout<<it;
}
int main(){
    
    string s;
    getline(cin,s);
    
    cout<<"Original String: "<<s<<endl;
    
    inverted(s);
}