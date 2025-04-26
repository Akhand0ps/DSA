#include<bits/stdc++.h>
using namespace std;

class QueueNode{

    public:

    int val;
    QueueNode* next;
    QueueNode(int val){
        this->val = val;
        next = nullptr;
    }

};

QueueNode* front = nullptr, *Rear = nullptr;

class Queue{

    public:

    int size = 0;
    bool empty();
    void Enqueue(int value); // push
    void Dequeue(); // pop
    int peek(); /// top or peek
};

bool Queue :: empty(){
    return front == nullptr;
}

int Queue :: peek(){


   if(empty()){
    cout<<"Queue is empty, Exiting....";
    exit(1);
   }

   else return front->val;
}

void Queue :: Enqueue(int value){

    QueueNode* temp;
    temp = new QueueNode(value);
    if(temp == nullptr) cout<<"Queue is full..."<<endl;

    else{
        
        if(front == nullptr){
            front = temp;
            Rear  = temp;
        }
        else{

            Rear->next = temp;
            Rear = temp;
        }

        cout<<value<<" Inserted into queue"<<endl;
        size++;
    }
}

void Queue :: Dequeue(){
    
    if(front == nullptr) cout<<"Queue is empty..."<<endl;

    else{
        cout<<front->val <<" Removed from queue"<<endl;
        QueueNode* temp = front;

        front = front->next;
        delete temp;

        size--;
    }
}

int main(){
    Queue Q;
    Q.Enqueue(1);
    Q.Enqueue(2);
    Q.Enqueue(3);
    Q.Enqueue(4);
    Q.Enqueue(5);
    Q.Dequeue();

    cout<<"Size of Queue: "<<Q.size<<endl;
    cout<<"Top element of Queue: "<<Q.peek()<<endl;

    return 0;

}