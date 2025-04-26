#include<bits/stdc++.h>
using namespace std;

int priority(char s){

    if(s == '^') return 3;
    else if(s=='*' || s == '/') return 2;

    else if(s == '+' || s== '-') return 1;

    else return -1;
}

string infix_to_pre(string name,int n){

    stack <char> st;
    reverse(name.begin(),name.end());
    for(int i=0;i<name.length();i++){

        if(name[i] == '('){
            name[i] = ')';
        }
        else if(name[i] == ')'){
            name[i] = '(';
        }
    }
    string ans="";
    int i=0;
    while( i < n ){
        // operand 
        if( (name[i] >= 'A' && name[i] <= 'Z') || 
            (name[i] >= 'a' && name[i] <= 'z') || 
            (name[i] >= '0' && name[i] <= '9')
        )
        {
            ans = ans+name[i];
        }

        else if(name[i]== '('){
            st.push(name[i]);
        }
        else if(name[i] == ')'){

            while(!st.empty() && st.top()!= '('){

                ans = ans + st.top();
                st.pop();
            }

            st.pop();// pop the opening bracket.
        }

        // what if it is operator(name[i] is an operator)

        else{

            if(name[i] == '^'){

                while(!st.empty() && priority(name[i]) <= priority(st.top())){

                    ans +=st.top();
                    st.pop();
                }
            }
            else{

                while(!st.empty () && priority(name[i]) <= priority(st.top())) {
                    ans += st.top();
                    st.pop();
                }
            }

            st.push(name[i]);
        }

        i++;
        
    }

    while(!st.empty()){
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(),ans.end());
    return ans;

}
int main(){
    string infixx;
    cout<<"Enter infix expression: ";
    getline(cin,infixx);
    
    cout<<"Pre expression: "<<infix_to_pre(infixx , infixx.length());
}