#include<bits/stdc++.h>
using namespace std;

class customer{


    string name;
    int acc_no;
    int balance;
    int* roi;

    public:

    customer(){
        name = "akhand";
        acc_no = 4124;
        balance = 999;

    }

// paramistised constructor
    customer (string a,int b,int c,bool){
        name = a;
        acc_no = b;
        balance = c;
        roi = new int[100000000];
        // delete[] roi;
    }
    
// useing this->> pointer. it stores the address of object when object is created. 
// constructor overloaded to aviod this use this-> pointer.

    customer(string name,int acc_no,int balance){
        this->name = name;
        this->acc_no = acc_no;
        this->balance = balance;
    }
    // copy constructor. it is already created in class when obj is created. but we can also recreate by wrting our
    // own type of code.

    
    void display(){
        cout<<name<<" "<<acc_no<<" "<<balance<<endl;
    }
    customer( customer &b){
        name = b.name;
        acc_no = b.acc_no;
        balance = b.balance;
    }
};

int main(){
    customer a1;
    customer a2("sagar",40,32);
    customer a3("akhand",4124,70);
    a1.display();
    a2.display();
    a3.display();

    customer a4(a3);
    a4.display();
    customer a5;
    a5=a3;
    a5.display();
}