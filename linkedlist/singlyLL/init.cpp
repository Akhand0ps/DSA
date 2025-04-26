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

node* convertArr2LL(vector<int>&nums){
    node* head = new node(nums[0]);
    node* mover = head;
    for(int i=1;i<nums.size();i++){
        node* temp = new node(nums[i]);
        mover->next =  temp;
        //oR
        mover = temp;
    }

    // return mover; prints last element
    return head;
}
int main(){
    // vector<int> nums ={2,5,8,7};
    // node* y = new node(nums[0]);
    // node* x =  new node(nums[0],nullptr);
    // cout<<y->next;
    // cout<<x->next;

//  CONVERT ARR INTO LINKED LIST AND RETURN ITS FIRST ELEMENT
    vector<int> nums ={12,5,8,7};
    node* head = convertArr2LL(nums);
    // cout<<head->data;
    node* temp = head;
    // prints whole linked list
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    


}