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
node* insert_head(node* head,int el){
    if (head != nullptr) {
        cout << "Previous Head: " << head->data << std::endl;
    }
    node* head_new =  new node(el,head);

    if (head_new!= nullptr) {
        cout << "New Head: " << head->data << std::endl;
    }
    return head_new;
   

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

    
    head = insert_head(head,66);
    head = new node(66,head);

    print(head);
    
}

