#include<iostream>

using namespace std;

int main(){
    
    // char str= 'a';
    // cout<< (int)str<<endl;
    // int size = sizeof(int);
    // cout<<size<<endl;

    int num;
    cout<<"Enter number: ";
    cin>>num;

    switch (num)
    {
    case 10:
        cout<< num <<"is even ";
        break;
    
    default:
        cout<<"checked"<<endl;
        break;
    }
    cout<<"executed"<<endl;
    return 0;
}