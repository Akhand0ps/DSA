#include<bits/stdc++.h>
using namespace std;
// uses LIFO: last in first out.
void explainStack(){
    stack<int>st;

    st.push(1);
    st.push(3);
    st.push(4);
    st.emplace(2);
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
int main(){
    explainStack();
    return 0;
}