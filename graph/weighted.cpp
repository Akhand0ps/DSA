#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    vector<pair<int,int>>adj[n+1];

    for(int i=0;i<m;i++){
        int u,v,wt;
        cin>>u>>v>>wt;

        adj[v].push_back({u,wt});
        adj[u].push_back({v,wt});
    }

    for(int i=1; i<=n;i++){
        cout<<"Node: "<< i <<": ";
        for(auto edge:adj[i]){
            cout<<"{"<<edge.first<<", "<<edge.second<<"} ";
        }
        cout<<endl;
    }
    return 0;
}