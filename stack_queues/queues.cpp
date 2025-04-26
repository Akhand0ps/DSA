#include<bits/stdc++.h>
using namespace std;


// THIS IS CIRCULAR QUEUE. 
//PUSH and POP FOR LINEAR
/*
    push(x){
    if(rear == sizeofarr) ->> queue is full
        arr[rear] = x;
        rear++;
    }
    pop{
        if(front == rear) queue is empty 
        popped = arr[ffront]
        front++;
        return front;
    }

*/
class Queue {
    public:

    int *arr;
    int cur_size, front,rear, maxsize;
    public:
    Queue(){
        maxsize = 4;
        arr = new int [maxsize];
        front = rear = 0;
        cur_size  = 0;
    }
    Queue(int maxsize){
        this->maxsize= maxsize;
        arr = new int[maxsize];
        front = rear= 0;
        cur_size = 0;
    }
    void push(int x){
        if(cur_size == maxsize ){
            cout<< "Queue is full \n Exiting..."<<endl;
            exit(1);
        }
        if(cur_size == 0){
            front =0 , rear =0;
        }
        else{
            rear = (rear +1) % maxsize;
        }
        
        arr[rear] = x;
        cur_size++;

    }

    int pop(){
            
            if(cur_size == 0){
                cout<<"QUEUE EMPTY\n EXITING..."<<endl;
                return -1;
            
            }

            int popped = arr[front];

            front = (front + 1) % maxsize;

            cur_size--;

            return popped;
    }
    int Top(){

        if(cur_size == 0) {
            cout<<"Queue is Empty"<<endl;
            return -1;
        }

        return arr[front];
    }

    int size(){
        return cur_size;
    }

    void display(){
        if(cur_size == 0)cout<<"QUEUE is empty"<<endl;
        
        cout<<"Queue till now: ";

        for(int i=0;i<cur_size;i++){

            cout<<arr[(front + i) % maxsize]<<" ";

        }
        cout<<endl;
    }
    
    ~Queue(){
        delete []arr; // destructor to free memory w
    }
    
};

int main(){

    Queue que;

    que.push(1);
    que.push(2);
    que.push(3);
    que.push(4);
    cout<<"Top ele: "<<que.Top()<<endl;
    que.display();

    que.pop();
    que.pop();
    que.pop();
    que.pop();


    que.display();
    

}