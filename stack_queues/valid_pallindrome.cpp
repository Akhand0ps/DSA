#include<bits/stdc++.h>
using namespace std;

bool check_valid(string str){
    // ->>>  ()[{}()]
    stack<int>st;
    for(auto it:str){

        if( it== '(' || it == '{' || it =='['){
            st.push(it);
        }

        else{

            if(st.size() == 0) return false;

            char ch = st.top();
            st.pop();

            if( (it == ')' && ch == '(' ) || (it == '}' && ch == '{') || (it == ']' && ch=='[') ) { 
                continue;
            }
            else{
                return false;
            }
        }
    }

    return st.empty();
}

int main(){

    string name;
    cout<<"Enter string: ";
    getline(cin,name);
    
    cout<<check_valid(name);

    
}