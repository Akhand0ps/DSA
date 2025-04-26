#include<bits/stdc++.h>

using namespace std;

class student{



    string name;
    int age;
    int roll;
    string grade;

    public:
    void setname(string s){
        if(s.size()==0){
            cout<<"invalid name!!";
            return;
        }
        name = s;
    }
    void setage(int n){

        if(n <0 || n>100){
            cout<<"invalid age!!!";
            return;
        }
        age = n;
    }
    void setroll(int r){
        roll = r;
    }
    void setgrade(string s){
        grade=s;
    }

  // print the values

    string getname(){
        return name;
    }

    int getage(){
        return age;
    }
    int getroll(){
        return roll;
    }

    string getgrade(int pass){

        if(pass == 4124){
        return grade;
        }

        else return "wrong password ";
    }
    
    

    
};

int main(){
    student s1;
    s1.setname("akhand");
    s1.setage(19);
    s1.setroll(32);
    s1.setgrade("A+");

    cout<<s1.getname()<<endl;
    cout<<s1.getage()<<endl;
    cout<<s1.getroll()<<endl;
    int pass;
    cout<<"enter pass:";
    cin>>pass;
    cout<<"grade: "<<s1.getgrade(pass)<<endl;
    

    // cout<<s1.name<<endl;
    // cout<<s1.age<<endl;
}