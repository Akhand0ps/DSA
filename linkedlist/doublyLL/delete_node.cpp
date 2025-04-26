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
node* deleteTail(node* head){
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
node* deleteHead(node* head){
    if(head== NULL || head->next == NULL){
        return nullptr;
    }

    node* prev = head;
    head = head->next;

    head->back = nullptr;
    prev->next = nullptr;

    delete prev;
    return head;

}

void deleltenode(node* temp){
    //NOTE: TEMP WILL NOT BE HEAD ITS MENTIONED. BUT IT CAN BE THE TAIL OF DLL;

    node* prev = temp->back;
    node* front = temp->next;

    if(front == NULL){
        prev->next = nullptr;
        temp->back = nullptr;
        free(temp);
        return;
    }

    prev->next = front;
    front->back = prev;

    temp->next = temp->back = nullptr;
    free(temp);

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
    cout<<"vector size: ";
    cin>>n;
    cout<<"Enter LL: "<<endl;
    vector<int>nums(n);
    
    for(int i=0;i<n;i++) cin>>nums[i];
    node* head = convertArr2LL(nums);
    deleltenode(head->next);
    print(head);


    
}