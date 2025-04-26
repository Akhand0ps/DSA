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
node* insertbeforeValue(node* head,int el,int val){
    
    if(head == NULL){
        return NULL;
    }

    if(head->data == val){
        return new node(el,head);
    }

   
    node* temp = head;

    while(temp!= NULL){
        
        if(temp->next->data == val){
            node* x = new node(el);

            x->next = temp->next;
            temp->next = x;

            break;

        }

        temp = temp->next;
    }

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
    node* head = convertArr2LL(nums);

    
    head = insertbeforeValue(head,66,8);
    print(head);
    
}

