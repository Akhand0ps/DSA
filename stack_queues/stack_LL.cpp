#include<bits/stdc++.h>
using namespace std;

class node{
    public:

    int data;
    node* next;

    public:
    node(int data, node* next){
        this->data = data;
        this->next = next;
    }
    node (int data){
        this->data = data;
        this->next =nullptr;
    }

};

class Stack{

    public:
    
    node* top; 
    int size;

    Stack(){
        top= nullptr;
        size = 0;
    }

    void  push(int x){
        node* temp= new node(x);

        temp->next = top;
        
        top = temp;

        size++;
    }

    int pop(){

        if(top == nullptr){
            cout<<"Stack Overflow!"<<endl;
            return -1;
        } 

        node* temp = top;
        int popped = temp->data;

        top = top->next;
        delete temp;

        size--;

        return popped; 
    }
    
    int Top(){
        if(top == nullptr){
            cout<<"Stack is empty!";
            return -1;
        }
        return top->data;
    }

    int Size(){
        return size;
    }

    void display(){
        node* temp = top;
        cout<<"Final linked list: ";
        while(temp){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};


int main(){
    
    Stack Linkedl;

    Linkedl.push(1);
    Linkedl.push(2);
    Linkedl.push(3);
    Linkedl.push(4);
    Linkedl.display();
    cout<<"Top element: "<<Linkedl.Top()<<endl;
    Linkedl.pop();
    Linkedl.display();
    Linkedl.push(5);
    Linkedl.display();
    Linkedl.Size();



}