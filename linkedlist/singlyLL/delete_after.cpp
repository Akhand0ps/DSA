// You are using GCC
#include <iostream>
using namespace std;

class Node {
    public:
    char data;
    Node* next;
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* createNode(char value) {
    Node* newNode = new Node(value);
    newNode->next = nullptr;
    return newNode;
}

void insertAfterPosition(Node* head, int pos, char value) {
    //Type your code here
    if(head == NULL ) return;
    if(head ->next == NULL){
        if(pos==1){
            Node* newnode = new Node(value);
            head->next = newnode;
        }
    }
    
    Node* temp = head;
    int cnt =1;
    while(temp != NULL){
        
        if(cnt == pos)break;
        temp = temp->next;
        cnt++;
    }
    Node* newNode = new Node(value);
    temp->next = newNode;
    
    
    
}

void displayList(Node* head) {
    Node* current = head->next;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << std::endl;
}

void deleteList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
}

int main() {
    Node* head = createNode('\0'); 
    int n;
    char value;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> value;
        insertAfterPosition(head, i, value);
    }

    int position;
    cin >> position;

    cin >> value;

    insertAfterPosition(head, position, value);
    cout << "Updated list: ";

    displayList(head);

    deleteList(head);

    return 0;
}