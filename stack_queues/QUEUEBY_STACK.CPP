#include<bits/stdc++.h>
using namespace std;

class Queue{

    public:

    stack<int> s1;
    stack<int> s2;

    void push(int x){
        
        s1.push(x);
    }

    int pop(){
        if(s2.empty()){

            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }

        int n= s2.top();
        s2.pop();

        return n;
    }

    int peek(){
        if(s2.empty()){

            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }

        
        if(s2.empty()) return -1;

        return s2.top();
        
    }

    int Size(){
        if(s1.empty() && s2.empty()){
            cout<<"Queue is empty exiting....";
            exit(1);
            
        }
        

        return s1.size()+s2.size();
    }



    

};

int main(){
    


    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();
    q.pop();
    q.pop();
    q.pop();
   cout<<"top: "<<q.peek()<<endl;
   cout<<"Size: "<<q.Size();

}