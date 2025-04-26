#include<bits/stdc++.h>
using namespace std;

class node{

    public:

    int val;
    node* next;

    node(int data){
        val = data;
        next = nullptr;
    }


};

node* insert(node* head, int val) {
    node* newNode = new node(val);
    if (head == nullptr) {
        newNode->next = newNode;
        return newNode;
    }
    node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    return head;
}
node* circular_swap(node* head){

    if(head == nullptr ||head->next == head)return head;
    int n = head->val;
    node* temp = head;

    while(temp->next != head){
        temp = temp->next;
    }

    int m = temp->val;
    temp->val = n;
    head->val = m;


    return head;
    
}

void print(node* head){
    if (head == nullptr) return;
    node* temp = head;
    cout << temp->val << " "; 
    temp = temp->next;
    while (temp != head) {   
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main(){

    node* head = nullptr;
    head = insert(head, 7);
    head = insert(head, 4);
    head = insert(head, 6);
    head = insert(head, 9);
    head = insert(head, 3);

    print(head);

    head = circular_swap(head);

    print(head);

    return 0;
}
