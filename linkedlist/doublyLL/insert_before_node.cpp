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

void insert_before_node(node* Knode,int val){

    node* prev = Knode->back;
    node* newNode = new node (val,Knode,prev);
    prev->next = newNode;
    Knode->back = newNode;
}
int main(){
    vector<int>nums ={4,1,2,4};
    node* head = convertArr2DLL(nums);
    insert_before_node(head->next->next,10);
    print(head);

}