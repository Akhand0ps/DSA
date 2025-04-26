#include<bits/stdc++.h>
using namespace std;

int main(){
    // int  number=30;    
    // int *p;      
    // p=&number;//stores the address of number variable    
    // cout<<"Address of number variable is:"<<&number<<endl;    
    // cout<<"Address of p variable is:"<<p<<endl;    
    // cout<<"Value of p variable is:"<<*p<<endl; 

    // cout<<endl;//swap
    // int a=20,b=10,*p1=&a,*p2=&b;    
    // cout<<"Before swap: *p1="<<*p1<<" *p2="<<*p2<<endl;    
    // *p1=*p1+*p2;    
    // *p2=*p1-*p2;    
    // *p1=*p1-*p2;    
    // cout<<"After swap: *p1="<<*p1<<" *p2="<<*p2<<endl;    
    
    float n = 5;

    void* p = &n;
    // int * q=      &n;
    float *r= &n;
    cout<<r<<" ";
    // cout<<q<<" ";
    cout<<p;
    
    return 0;         
}