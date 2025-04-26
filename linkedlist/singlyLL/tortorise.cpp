#include<bits/stdc++.h>
using namespace std;
class node{
    public:

    int data;
    node* next;

    public:
    node(int data,node* next){
        this->data = data;
        this->next = next;
    }
    node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

void print(node* head){
    node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
node* convert(vector<int>&nums){
    node* head = new node(nums[0]);
    node* mover = head;
    for(int i=1;i<nums.size();i++){
        node* temp = new node(nums[i]);
        mover->next = temp;
        mover = mover->next;
    }

    return head;
}
int mid(node* head){
    if(head == NULL || head->next == NULL){
        return head->data;

    }

    node* slow = head;
    node* fast = head;


    while(fast!= NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->data;
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    node* head = convert(nums);
    print(head);
    cout<<endl;
    int middle = mid(head);
    cout<<"middle el: "<<middle;
}