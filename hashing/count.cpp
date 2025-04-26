#include<bits/stdc++.h>
using namespace std;

int hashh[1000000];

int main(){

    int n;
    cout<<"Size of arr: ";
    cin>>n;
    vector<int>nums(n);
    //1 3 2 1 3
    cout<<"Enter arr: ";
    for(int i=0;i<n;i++)cin>>nums[i];

    for(int i=0;i<n;i++){
        hashh[nums[i]] += 1;
    }

    int q;
    cout<<"Number of Queries: ";
    cin>>q;
    
    cout<<"Enter num to check: ";

    while(q--){

        int num;
        cin>>num;
        cout<<"number of occ of "<<num<<": "<<hashh[num]<<endl;
    }
}