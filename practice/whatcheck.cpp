#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // constructor//
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertathead(Node *&head, int d)
{
    
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
Node*  insertattail(Node* head,int d){
    //temp aka new node create;
    if(head == NULL){
        return new Node(d);
    }
    Node* new_tail = new Node(d);
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    // cout<<"temp->next; "<<temp->next->data<<endl;
    temp->next=new_tail;
    cout<<"inserted el:"<<temp->next->data<<endl;
    return head;
}
void printll(Node *&head)
{
    Node *temp = head; // bcz it starts from head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}

void insertatposition(Node*&tail,Node*&head,int position,int d){
   
    if(position==1){
        insertathead(head,d);
        return;
    }
    Node*temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    
    if(temp->next==NULL){
        insertattail(tail,d);
        return;
    }

//creating a node for d
Node*nodetoinsert=new Node(d);
nodetoinsert->next=temp->next;
temp->next=nodetoinsert;
}
int main()
{
    // created a new node here;
    Node *node1 = new Node(23);
    Node *head = node1;

    Node*node2=new Node(44);
    node1->next=node2;

    
    Node*node3=new Node(04);
    node2->next=node3;
    node3->next=NULL;
    cout << node1->data <<" ";
    cout<<node2->data<<" ";
    cout<<node3->data<<endl;
   
    Node*tail=node1;
    
    insertathead(head, 11);

    printll(head);

    Node* newLL = insertattail(head,77);

    printll(newLL);

    insertatposition(tail,head,1,9);
    printll(head);

    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    return 0;
}