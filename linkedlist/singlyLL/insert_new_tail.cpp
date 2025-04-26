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
node* insert_tail(node* head,int el){
    
    if(head == NULL){
        return new node(el);
    }
    node* new_tail = new node(el);
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next=new_tail;
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
    vector<int> nums ={4,1,2,8};
    for(int i=0;i<nums.size();i++) cout<<nums[i]<<" ";
    cout<<endl;
    node* head = convertArr2LL(nums);

    
    head = insert_tail(head,66);
    print(head);
    
}

