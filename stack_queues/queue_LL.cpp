#include<bits/stdc++.h>
using namespace std;

class node{

    public:
    int val;
    node* next;

    public:
    node(int val,node* next){
        this->val = val;
        this->next = next;
    }

    node(int val){
        this->val = val;
        this->next = nullptr;
    }
};

class Queue{
    public:
    node* front;
    node* rear;
    
    int size;
    public:
    Queue(){
        front = rear = nullptr;
        size = 0;
    }

    void push(int x){
        
        node* temp = new node(x);
        if(front == nullptr){
            front= rear = temp;
        }
        else{
            rear->next = temp;
            rear = temp;
        }

        size++;
    }

    int pop(){
        
        if(front == nullptr) return -1;

        node* temp = front;
        int popped = temp->val;

        front = front->next;
        delete temp;
        size--;
        return popped;
    }

    int top(){
        if(front == nullptr) return -1;

        else return front->val;
    }

    int Size(){
        return size;
    }
    void display(){
        if(front == nullptr) cout<<"NULL!"<<endl;
        node* temp = front;
        cout<<"Final Queue: ";
        while(temp!= nullptr){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

};

int main(){

    Queue LLL;
    LLL.push(1);
    LLL.push(2);
    LLL.push(3);
    LLL.push(4);
    LLL.display();
    LLL.pop();
    LLL.display();

}