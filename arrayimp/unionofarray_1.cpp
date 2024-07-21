#include<bits/stdc++.h>
using namespace std;

void union_array(int arr_1[],int arr_2[],int n1,int n2){
    set<int> st;
    for(int i=0;i<n1;i++) st.insert(arr_1[i]);
    for(int i=0;i<n2;i++) st.insert(arr_2[i]);
    
    // int union_a[st.size()];
    // int index=0;
    // for(auto it: st){
    //     union_a[index] = it;
    //     index++;
    // }
    // for(int i=0;i<index;i++) cout<< union_a[i]<<" ";

    // OR
    vector<int> temp;
    for(auto it:st){
        temp.push_back(it);
    }
    for(int i=0;i<temp.size();i++) cout<< temp[i]<<" ";
}
void union_optimal(int a[],int b[],int n1,int n2){
    int i=0;
    int j=0;
    vector<int>unionArr;
    while(i<n1 && j<n2){
        if(a[i] <= b[j]){
            if(unionArr.size() == 0 || 
            unionArr.back() != a[i]){
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else{
            if(unionArr.size() ==0 ||
             unionArr.back() != b[j]){
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }
        while(j<n2){
            if(unionArr.size() ==0 ||
             unionArr.back() != b[j]){
                unionArr.push_back(b[j]);
            }
            j++;
        }
        while(i<n1){
             if(unionArr.size() == 0 || 
            unionArr.back()!= a[i]){
                unionArr.push_back(a[i]);
            }
            i++;
        }
        
        for(auto it:unionArr)cout<<it<<" ";
    
    

}
int main(){
    int n1,n2;
    cout<<"size of n1: ";
    cin>> n1;
    cout<<"size of n2: ";
    cin>>n2;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
    union_optimal(a,b,n1,n2);

    return 0;
}