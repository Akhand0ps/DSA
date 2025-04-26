#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter number of nodes: ";
    cin>>n;
    int m;
    cout<<"Enter number of edges: ";
    cin>>m;

    int adj[n+1][n+1]={0};
    int size = sizeof(adj)/sizeof(adj[0]);
    // memset(adj, 0, sizeof(adj));
    for(int i=0;i<m;i++){
        
        int u,v;
        cin>>u>>v;
        adj[u][v] =1;
        adj[v][u] =1;
    }

    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}