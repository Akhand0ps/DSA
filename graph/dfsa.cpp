#include<bits/stdc++.h>
using namespace std;

void dfs(int node,vector<vector<int>>&adj,int vis[],vector<int> &ans){

    vis[node] = 1;
        ans.push_back(node);
        for(auto it:adj[node]){
            if(!vis[it]){
                dfs(it,adj,vis,ans);
            }
        }
}

vector<int> dfsOngraph(vector<vector<int>>&adj){

    int vis[adj.size()] = {0};
        int start = 1;
        vector<int>ans;
        dfs(start,adj,vis,ans);
        
        return ans;

    
}

int main(){

    int n,m;

    cin>>n>>m;

    // vector<int>adj[n+1];
    vector<vector<int>>adj(n+1);

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;

        adj[v].push_back(u);
        adj[u].push_back(v);
    }

    for (int i = 1; i <= n; i++) {

        cout << "Node " << i << ": ";

        for (int neighbor : adj[i]) {
            cout << neighbor << " ";
        }

        cout << endl;
    }
    cout<<endl;

    
  

    vector<int>res = dfsOngraph(adj);
    cout<<"DFS traversal: ";
    for(auto it:res){
        cout<<it<<" ";
    }


}