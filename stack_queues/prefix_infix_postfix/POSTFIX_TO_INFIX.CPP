#include<bits/stdc++.h>
using namespace std;

string postToInfix(string exp){
    int i=0;

    stack<string>st;

    while ( i < exp.length()){
            
            if( (exp[i] >= 'A' && exp[i] <= 'Z') ||
                (exp[i] >= 'a' && exp[i] <= 'z') ||
                (exp[i] >= '0' && exp[i] <= '9'))
            {
                
                // st.push(exp[i]);
                st.push(string(1,exp[i]));
            }
            
            else{
                
                string t1 = st.top(); st.pop();
                string t2 = st.top(); st.pop();
                
                st.push ('(' + t2 + exp[i] + t1 + ')');
                
                
                
            }
            
            i++;
        }
        

    return st.top();
}

int main(){
    string postfixx;
    cout<<"Enter postfix: ";
    getline(cin,postfixx);

    cout<<"Infix s: "<<postToInfix(postfixx);
}