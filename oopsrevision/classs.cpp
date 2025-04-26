#include<bits/stdc++.h>
using namespace std;

class student{
    // public:
    string name;
    int age;

    public:
    void setname(){
        cout<<"enter name: ";
        getline(cin,name);
        
    }

    void setage(){
        cout<<"enter age: ";
        cin>>age;
    }
    
    void display(){
        cout<<name<<endl;
        cout<<age<<endl;
    }

};

int main(){

    student s1;

    s1.setname();
    s1.setage();

    s1.display();
    


}