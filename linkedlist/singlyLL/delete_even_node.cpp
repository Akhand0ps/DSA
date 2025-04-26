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
    cout<<endl;
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
node* delete_even(node* head){
    if(head ==NULL || head->next== NULL) return head;


    node* temp = head;
    node* prev = nullptr;
    int cnt=1;
    while(temp){
        if(cnt % 2 ==0){
            prev->next = temp->next;
            delete temp;
            temp = prev->next;
        }
        else{
            prev = temp;
            temp = temp->next;
        } 
        cnt++; 
    }

    return head;
}
void print_new(node* head){

    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){
    vector<int> nums ={4,1,2,8};
    node* head = convertArr2LL(nums);
    print(head);
    node* newhead = delete_even(head);
    print_new(newhead);
    
}

