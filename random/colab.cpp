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
         data  = data1;
        next = nullptr;
    }
    
};

node* Convert(vector<int> &nums){
    int n = nums.size();
    
    node* head = new node(nums[0]);
    node* mover = head;
    
    for(int i = 1;i<n;i++){
        mover->next = new node(nums[i]);
        mover = mover->next;
    }
    
    return head;
}

node* Convert_ans(vector<int> &nums){
    int n= nums.size();
    node* head = new node(nums[0]);
    node* mover = head;
    for(int i=1;i<n;i++){
        node* temp = new node(nums[i]);
        mover->next = temp;
        mover = temp;
    }
    
    return head;
}
void print_ans(node* head){
    node* temp = head;
    cout<<"Modified Linked List: ";
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
vector<int>change(vector<int> &nums,int k){
    int n= nums.size();
    vector<int> ans;
    for(int i=k-1;i>=0;i--){
        ans.push_back(nums[i]);
    }
    for(int i=n-1;i>=k;i++){
        ans.push_back(nums[i]);
    }
    return ans;
}
void print(node* head){
    if(head == NULL) return;
    cout<<"Original Linked List: ";
    node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    int k;
    cin>>k;
    node* head = Convert(nums);
    
    print(head);
    
    vector<int>res = change(nums,k);
    node* newHead = Convert_ans(res);
    print_ans(newHead);
    
}