#include<bits/stdc++.h>
using namespace std;

class node{
    public:

    int data;
    node* next;

    public:
    node(int data1,node* next1){
        data = data1;
        next = next1;
    }
    node(int data1){
        data = data1;
        next = nullptr;
    }
};
void print(node* head){
    node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
node* addOne(node* head) {
        // Your Code here
        // return head of list after adding one
        if(head == NULL){
            return new node(1);
        }
        
        if(head->next == NULL){
            node* newnode = new node(1);
            head->data += newnode->data;
            return head;
        }
        
        node* temp = head;
        int sum =0;
        while(temp->next!= NULL){
            sum += temp->data;
            temp= temp->next;
            
        }
        node* newnode = new node(1);
        temp->data +=newnode->data;
        sum += temp->data;
        
        
    return head;
}


node* convertArr2LL(vector<int>&nums){
    node* head = new node(nums[0]);
    node* mover = head;
    for(int i=1;i<nums.size();i++){
        node* temp = new node(nums[i]);
        mover->next = temp;
        mover = mover->next;
    }

    return head;
}
int main(){
    vector<int> nums ={2,1,9};
    for(int i=0;i<nums.size();i++) cout<<nums[i]<<" ";
    cout<<endl;
    node* head = convertArr2LL(nums);

    
    head = addOne(head);
    print(head);
    
}

