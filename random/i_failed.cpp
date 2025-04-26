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

        next = nullptr;
    }


};

node* convert (vector<int>&nums){
    
    node* head = new node(nums[0]);
    
    node* mover = head;
    for(int i=1;i<nums.size();i++){
        node* temp = new node(nums[i]);
        mover->next = temp;
        mover = temp;
    }

    // cout<<mover->data<<endl;
    

    return head;
}

void print(node* head){
    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){

    int n;

    int check = 0;
    vector<int>ans;
    while(check != -1){
        cin>>n;
        ans.push_back(n);
        check = n;
    }
    ans.pop_back();
    reverse(ans.begin(),ans.end());
    node* head  = convert(ans);
    print(head);
    
}
