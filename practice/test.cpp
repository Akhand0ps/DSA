
#include <bits/stdc++.h>
using namespace std;

// int main() {
//     int x = 10;
//     cout << "Value of x: " << x++ << endl;
//     // cout << "Value of x: " <<  << endl;
//     cout << "Updated value of x: " << x;
//     return 0;
// }
// x++ means ->>> pehle print kara lo phir inc karo;
// ++x means ->> pehle inc kr karo phir print karo;

// int main(){
//     int n = 10;
//     // insertion in end
//     // insertion at starting a[i-1]= a[i-2];
//     int arr[n] = {1,2,3,4,5};
//     for(int i =0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     cout<<endl;

//     int newel = 9;

//     int size =0;

//     while(size < 10 && arr[size] !=0){
//         size++;
//     }

//     arr[size] = newel;

//     for(int i =0;i<=size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     // cout<<1%5;
//     // int n;
//     // cin>>n;

//     vector<int>arr ={1,2,3,4,5,6,7};
//     int n = arr.size();
//     int k =3;
//     vector<int> temp(n);

//     for(int i =0;i<n-k;i++){
//         temp[i] = arr[n-k+i];

//     }

//     for(int i =0;i<n-k;i++){
//         temp[k+i] = arr[i];
//     }

//     for(int i=0;i<n;i++){
//         arr[i] = temp[i];
//     }
//     cout<<"temp: ";
//     for(int i=0;i<n;i++) cout<<temp[i]<<" ";
//     cout<<endl;
//     cout<<"arr: ";
//     for(int i =0;i<n;i++) cout<<arr[i]<<" ";


// }

// You are using GCC
#include<bits/stdc++.h>
using namespace std;

int primecheck(int sum,vector<int> &nums){
    int cnt =0;
    for(int i=0;i<nums.size();i++){
        int check = sum-nums[i];
        
        if((check/ i) != i){
            return check;
            break;
        }
    }
    
    return -1;
}
int primesum(vector<int>&nums){
    int n = nums.size();
    
    if(n==0) return 0;
    
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += nums[i];
    }
    
    
    return primecheck(sum,nums);
    
    
}
int main(){
    int n;
    cin>>n;
    
    vector<int> nums(n);
    for(int i =0;i<n;i++) cin>>nums[i];
    
    int res = primesum(nums);
    if(res ==-1) cout<<"No valid prime sum found";
    
    else cout<<res;
    
    
}