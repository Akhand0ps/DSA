#include<bits/stdc++.h>
using namespace std;

int main(){
    double radius;
    cout<<"enter radius: ";
    cin>>radius;

    double angle;
    cout<<"enter angle: ";
    cin>>angle;


    double pii = 3.14;

    double area = pii * radius * radius;
    double arc_length = (angle/360.) * 2 * pii * radius;
    
    cout<<fixed <<setprecision(2)<<area<<endl;
    cout<<fixed <<setprecision(2)<<arc_length;
}