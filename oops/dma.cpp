#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    string name;
    int age;
    int roll;

};

int main(){

    student *s = new student;

    (*s).name = "akhand";
    (*s).age = 19;
    (*s).roll = 32;

    cout<<s->name<<endl;
    cout<<s->age<<endl;
    cout<<s->roll<<endl;
}