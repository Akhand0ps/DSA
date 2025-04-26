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

node* convertArr2LL(vector<int> &nums){
    if(nums.empty()){
        return nullptr;
    }
    int n = nums.size();

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
node* delete_Tail(node* head){
    if(head== NULL || head->next == NULL){
        return nullptr;
    }
    
    node* temp = head;

    while(temp->next!= NULL){
        temp = temp->next;
    }
    node* prev = temp->back;
    prev->next = nullptr;
    temp->back = nullptr;
    delete temp;
    return head;
}
void print(node* head){
    node* temp = head;
    
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){

    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    node* head = convertArr2LL(nums);
    head = delete_Tail(head);
    print(head);


    
}