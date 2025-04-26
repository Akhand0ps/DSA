#include<bits/stdc++.h>
using namespace std;

class Stack {

    int size;
    int * nums;
    int top;
    public:

        Stack(){
            top = -1;
            size = 1000;
            nums = new int[size];
        }
        void push(int x){
            top++;
            nums[top] =x;
        }       

        int pop(){
            int x = nums[top];
            top--;
            return x;
        }

        int Top(){
            return nums[top];
        }

        int Size(){
            return top+1;
        }
        void display(){
            
            if(top == -1)cout<<"stack is empty";

            for(int i=0;i<top+1;i++){
                cout<<nums[i]<<" "
;            }
        }

};

int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.Top()<<endl;
    cout<<"deleted element: "<<st.pop();
    cout<<endl;
    st.display();
    cout<<endl;
    st.push(0);
    st.display();
    

}