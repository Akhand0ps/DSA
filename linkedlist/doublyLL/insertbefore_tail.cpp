#include<bits/stdc++.h>
using namespace std;

class node{

    public:
    int data;
    node* next;
    node* back;

    public:

    node(int data1,node* next1,node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    public:
    node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
node* convertArr2DLL(vector<int>& nums){
    if(nums.empty()) return nullptr;

    int n =nums.size();
    node* head = new node(nums[0]);
    node* prev = head;


    for(int i=1;i<n;i++){
        node* temp = new node(nums[i]);
        prev->next = temp;
        temp->back = prev;
        prev = temp;

    }

    return head;
}

void print(node* head){
    node* temp = head;

    while(temp != NULL){
        cout<<temp->data<< " ";
        temp= temp->next;
    }
}
node* insert_before_head(node* head,int val){
    node* newhead = new node(val,head,nullptr);
    head->back = newhead;

    return newhead;
}
node* insert_before_tail(node* head,int el) {
    
    if(head->next== NULL){
        return insert_before_head(head,el);
    }
    node* temp = head;
    node* val = new node(el);

    while(temp->next != NULL){
        temp = temp->next;
    }
    cout<<temp->data<<endl;
    node* prev = temp->back;

    prev->next = val;
    val->back = prev;

    val->next = temp;
    // temp->back = val;
    // prev  = val;

    return head;
}
int main(){
    vector<int>nums ={4,1,2,4};
    for(auto it:nums) cout<<it<<" ";
    cout<<endl;
    node* head = convertArr2DLL(nums);
    head = insert_before_tail(head,5);
    print(head);

}