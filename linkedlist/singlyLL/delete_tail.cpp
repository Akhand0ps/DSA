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
node* delete_tail(node* head){
    if(head== NULL || head->next == NULL) return NULL;
    node* temp = head;
    
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;

    return head;
}
node* delete_kth(node* head,int k){
    if(head == NULL ) return head;
    // k==1
    if(k==1){
        node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    node* temp = head;
    node* prev = NULL;
    int cnt=0;

    while(temp != NULL){
        cnt++;
        if(cnt==k){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    return head;
}
node* delete_k_element(node* head,int k){
    if(head->data==k ) return head;
    // k==1
    if(head->data == k){
        node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    node* temp = head;
    node* prev = NULL;
    while(temp != NULL){
        if(temp->data == k){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    return head;
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
    // head = delete_tail(head);
    // head = delete_kth(head,8);
    // head = delete_k_element(head,2);
    
    head = insert_head(head,66);
    head = new node(66,head);

    print(head);
    
}

