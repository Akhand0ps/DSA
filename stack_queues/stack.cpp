#include<bits/stdc++.h>

using namespace std;
class Stack {
  int size;
  int * arr;
  int top;
  public:
    Stack() {
      top = -1;
      size = 5;
      arr = new int[size];
    }
  void push(int x) {
    if(top >= size ){
      return;
    }
    else {
      top++;
      arr[top] = x;
    }
  }
  int pop() {

    int x = arr[top];
    top--;
    return x;
  }
  int Top() {

    return arr[top];
  }
  int Size() {
    return top + 1;
  }
  void display(){
    if(top == -1) cout<<"null";

    for(int i=0;i<top+1;i++) cout<<arr[i]<<" ";
  }
};
int main() {
  Stack s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);
  s.push(6);
  s.push(7);
  s.push(8);
  s.push(9);
  s.push(10);
    // s.pop();
  // cout<<s.Top();
   s.display();
  return 0;
}