#include<bits/stdc++.h>
using namespace std;

int* rearrange_arr(int arr[],int n){
    vector<int> pos,neg;
    for(int i=0;i<n;i++){
        if(arr[i] > 0){
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    }
    for(int i=0;i<n/2;i++){
        arr[i*2]= pos[i];
        arr[i*2+1]= neg[i];
    }

    return arr;
}
// 

vector<int> rearrange_arr_optimised(int arr[],int n){
    vector<int> ans(n,0);
    int pos= 0;
    int neg=1;

    for(int i=0;i<n;i++){
        if(arr[i] > 0){
            ans[pos] = arr[i];
            pos +=2;
        }
        else{
            ans[neg] = arr[i];
            neg += 2;
        }
    }
    


    return ans;
}
// what if equal no. of pos and neg not mentined or they're not sure whether its equal or not!!
// so, we'll arrange only equal parts and rest will be added after that in the end of array,

int* follow_up(int arr[],int n){
    vector<int> pos,neg;
    for(int i =0;i<n;i++){
        if(arr[i] > 0){
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    }
    if(pos.size() > neg.size()){
        // equal parts are added
        for(int i =0;i<neg.size();i++){
            arr[2*i] = pos[i];
            arr[2*i+1] = neg[i];
        }

        // leftouts
        int index = neg.size() *2;
        for(int i= neg.size();i<pos.size();i++){
            arr[index] = pos[i];
            index++;
        }
    }
    else{
        for(int i =0;i<pos.size();i++){
            arr[2*i] = pos[i];
            arr[2*i+1] = neg[i];
        }

        // leftouts
        int index = pos.size() *2;
        for(int i= pos.size();i<neg.size();i++){
            arr[index] = neg[i];
            index++;
        }
    }

    return arr;

}
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0;i<n;i++){
        cin>> arr[i];
    }
//    vector<int> res= rearrange_arr_optimised(arr,n);
    follow_up(arr,n);
    for(int i=0;i<n;i++){
       cout<< arr[i]<<" ";
    }
}