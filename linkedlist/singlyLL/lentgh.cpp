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
        mover->next = temp; // Link the current node to the next node
        mover = mover->next; // Move the mover pointer to the newly added node
    }

    // return mover; prints last element
    return head;
}
int length_LL(node* head){
    int cnt=0;
    node* temp = head;
    while(temp != nullptr){
        
        temp = temp->next;
        cnt++;
        
    }
    return cnt;
}
int  find_c(node* head,int target){
    if(head== NULL) return -1;
    node* temp = head;
    int cnt = 1;
    while(temp){
        
        if(temp->data == target){
            cnt++;
            break;
        }
        temp = temp->next;
    
    }

    return cnt;
}
int find_occ(node* head,int k){
    if(head == NULL){
        return -1;
    }

    int cnt= 1;
    node* temp = head;
    while(temp){
        
        if(temp->data == k){
            cnt++;
        }

        temp = temp->next;
    }

    return cnt;
}
int main(){

    vector<int> nums ={2,8,8,8,8,8,11,13};
    node* head = convertArr2LL(nums);
    // cout<<length_LL(head);
    cout<<endl;
    cout<<"first occ :"<<find_c(head,8)<<endl;
    cout<<"last occ :"<<find_occ(head,8)<<endl;

    cout<<"total occ: "<<find_occ(head,8) - find_c(head,8)+1;


}