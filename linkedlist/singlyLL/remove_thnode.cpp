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
node* remove_node(node* head,int n){
    if(head == NULL)return nullptr;

        int cnt=0;
        node* temp = head;

        while(temp){
            cnt++;
            temp=temp->next;
        }
        if(cnt == n){
            node* newhead = head->next;
            free(head);
            return newhead;
        }
        int res= cnt-n;

        temp = head;
        
        while(temp){

            res--;
            if(res == 0)break;

            temp = temp->next;
        }

        node* deletenode=temp->next;
        temp->next = temp->next->next;
        free(deletenode);


       
    return head;
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    node* head = convert(nums);
    print(head);
    cout<<endl;
    int k;
    cout<<"Enter node position from last: ";
    cin>>k;
    node* newlist = remove_node(head,n);

    print(newlist);
}