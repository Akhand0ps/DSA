#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;
};
void print (node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}

int main(){

   node* head = new node();
    head->data;
    cin>>head->data;
    head->next = NULL;
    print(head);
    delete head;


}