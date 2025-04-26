#include<bits/stdc++.h>
using namespace std;


class minheap{


    public:
    int *arr;
    int size;
    int total_size;

    minheap(int n){

        arr = new int[n+1];
        size = 0;
        total_size = n;
    }

    void insert(int val){
        size++;

        arr[size] = val;

        int index = size;

        while(index > 1 && arr[(index)/2] > arr[index]){
            swap(arr[index],arr[(index)/2]);
            index = (index)/2;

        }


    }

    void display(vector<int>&nums){
        for(int i=1;i<=size;i++){
            nums.push_back(arr[i]);

            cout<<arr[i]<<" ";
        }
    }

};

void heapify(int i , vector<int>&nums,int n){

    int largest = i;

    int left = 2*i;
    int right  = 2*i+1;

    if(left < n && nums[left] > nums[largest]){
        largest = left;
    }

    if(right < n && nums[right] > nums[largest]){
        largest = right;
    }

    if(largest != i){
        swap(nums[i],nums[largest]);
        heapify(largest,nums,n);
    }

}


void buildheap(vector<int>&nums){
    int n= nums.size();
    for(int i=(n-1)/2;i>=0;i--){
        heapify(i,nums,n);
    }
}

int lasteven(vector<int>&nums){
    int n= nums.size();
    int cnt=0;
    for(int i=n-1;i>=0;i--){
        
        if(nums[i] % 2 == 0){
            cnt++;
            if(cnt ==2 ) return nums[i];
        }
    }

    return -1;
}
int main(){
    vector<int>nums;
    minheap h1(30);
    h1.insert(20);
    h1.insert(15);
    h1.insert(10);
    h1.insert(8);
    h1.insert(16);
    // h1.display();
    h1.insert(90);
    h1.display(nums);

    cout<<endl;
    for(auto it:nums)cout<<it<<" ";
    cout<<endl;
    buildheap(nums);

    cout<<"Maxheap: "; 
    for(auto it:nums)cout<<it<<" ";
    cout<<endl;

    cout<<"Last Even element: "<<lasteven(nums);
    
}