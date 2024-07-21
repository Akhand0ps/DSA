#include<bits/stdc++.h>
using namespace std;

vector<int> intersection_array(int a[],int b[],int n,int m){
    vector<int> ans;
    // this brute solution// 
	int vis[m]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i] == b[j] && vis[j] == 0){
				ans.push_back(a[i]);
				vis[j]=1;
				break;
			}
			if(b[j] > a[i]){
				break;
			}
		}
	}
	return ans;
}
vector<int> intersection_optimal(int a[],int b[],int n,int m)
{
    int i =0;
    int j=0;
    vector<int> ans;
    while(i<n && j<m){
        if(a[i] < b[j]){
            i++;
        }
        else if(a[i] > b[j]){
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;

        }
    }
    return ans;
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
    vector <int> intersec= intersection_optimal(a,b,n1,n2);
    for(auto it: intersec){
        cout<<it<<" ";
    }
    return 0;


}