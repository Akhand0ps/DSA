#include<bits/stdc++.h>
using namespace std;

class Maxheap{
    public:
    int* arr;
    int size; // total el in heap
    int total_size; // total size of arr

    Maxheap(int n){

        arr = new int[n];
        size = 0;
        total_size = n;
    }

    // insert into the heap

    void insert(int val){

        // if(size == total_size){
        //     cout<<"heap overflow";
        //     return;
        // }
        arr[size] = val;
        int ind = size;
        size++;

        // compare it with its parent

        while( ind > 0 && arr[(ind-1)/2] < arr[ind]) {
            swap(arr[ind],arr[(ind-1)/2]);
            ind = (ind-1)/2;
        }

        // cout<<arr[ind]<<" is inserted into the heap"<<endl;

    }

    void display(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
            
        }
        cout<<endl;
    }
    void Heapify(int index){

        int largest = index;
        int left = 2*index+1;
        int right = 2*index+2;

        if(left < size && arr[left] > arr[largest]){
            largest = left;
        }


        if(right < size && arr[right] > arr[largest]){
            largest = right;
        }

        if(largest!=index){

            swap(arr[index],arr[largest]);

            Heapify(largest);
        }
        
    }
    void Delete(){

        if(size==0){
            cout<<"heap underflow"<<endl;
        }
    
        cout<<arr[0]<<" deleted from the heap"<<endl;
        arr[0] = arr[size-1];
        size--;

        Heapify(0);
    }
};

int main(){

    Maxheap h1(30);
    h1.insert(20);
    h1.insert(15);
    h1.insert(10);
    h1.insert(8);
    h1.insert(16);
    // h1.display();
    h1.insert(90);
    h1.display();

    h1.Delete();

    h1.display();

}
