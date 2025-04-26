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
    // memset(adj, 0, sizeof(adj));
    for(int i=0;i<m;i++){
        
        int u,v;
        cin>>u>>v;
        adj[u][v] =1;