#include<bits/stdc++.h>
using namespace std;

class Stack{

   public:
   queue<int>q;

  void push(int x){

        int s = q.size();
        q.push(x);

        for(int i=0;i < s; i++){

            q.push(q.front());
            q.pop();
        }
    }

    int pop(){

        if(q.empty()) return -1;
        int n= q.front();
        q.pop();

        return n;
    }

    int peek(){
        if(q.empty()) return -1;
        return q.front();
    }

    int Size(){
        if(q.empty()) return -1;
        return q.size();
    }
    void display(){

    }




};

int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<"deleted el: "<<st.pop()<<endl;
    cout<<"deleted el: "<<st.pop()<<endl;
    cout<<"deleted el: "<<st.pop()<<endl;
    cout<<"deleted el: "<<st.pop()<<endl;

    cout<<"top el: "<<st.peek()<<endl;
    cout<<"size :"<<st.Size();

}