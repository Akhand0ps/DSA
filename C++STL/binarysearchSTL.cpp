// #include<bits/stdc++.h>
// using namespace std;

// void BS(int arr[],int n,int x){
//     sort(arr,arr+n);
//     bool res = binary_search(arr,arr+n,x);
//     if(res==true) cout<<"MIl gya"<<endl;
//     else cout<<"not found"<< endl;
// }
// void sortDe(int arr[],int n){
//     sort(arr,arr+n,greater<int>());
//     // for(auto it:arr){
//     //     cout<< it<< endl;
//     // }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// bool comp(pair<int,int>p1,pair<int,int>p2,int n){
//     if(p1.second<p2.second) return true;
//     if(p1.second>p2.second) return false;
//     // they are same
//     if(p1.first>p2.first) return true;
//     else return false;
// }
// void myWay(int arr[],int n){
//     sort(arr,arr+n,comp());
//     // for(auto it: arr){
//     //     cout<< *(it)<<endl;
//     // }
// }

// int main(){
//     int n;
//     cout<< "Size: ";
//     cin>> n;
//    // int x;
//    // cout<<"target: ";
//    // cin>> x;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>> arr[i];
//     }
//     // cout<<endl;

//     cout<<" array: ";
//     for(int i=0;i<n;i++){
//         cout << arr[i]<<" ";
//     }
//     cout<< endl;
//     // BS(arr,n,x);

//     // sort in decending order;
//     pair<int ,int> a[n];
//     comp(pair<int ,int> a,n);
// }
#include <bits/stdc++.h>
using namespace std;

// Comparator Function
bool comp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second != p2.second) // Compare second elements first
        return p1.second < p2.second; // Ascending order based on the second element
    return p1.first > p2.first; // If second elements are same, then compare first elements in descending order
}

// Function to sort array of pairs
void myWay(pair<int, int> arr[], int n) {
    sort(arr, arr + n, comp); // Sort the array of pairs using the comparator function
    for (int i = 0; i < n; i++) {
        cout << "(" << arr[i].first << ", " << arr[i].second << ") "; // Print the sorted pairs
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Size: ";
    cin >> n;

    pair<int, int> a[n]; // Declare an array of pairs
    cout << "Enter pairs (first and second): ";
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second; // Input pairs
    }

    // Sort and print the array of pairs
    cout << "Sorted pairs: ";
    myWay(a, n);

    return 0;
}
