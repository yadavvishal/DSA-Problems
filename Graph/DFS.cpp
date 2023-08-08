#include<bits/stdc++.h>
using namespace std;
vector<int>v;


void solve(int src,vector<int>&vis,vector<int>adj[])
{
    vis[src]=1;
    v.push_back(src);
    for(auto x:adj[src])
    {
        if(!vis[x])
        {
            solve(x,vis,adj);
        }
    }
}
vector<int>dfs(vector<int>adj[],int V)
{
    vector<int>vis(V,0);

    solve(0,vis,adj);
    return v;
}
void addEdge(vector<int>adj[],int v,int u)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main()
{
    int V=6;
    vector<int>adj[V];
    addEdge(adj,0,2);
    addEdge(adj,0,3);
    addEdge(adj,0,1);
    addEdge(adj,2,4);
    cout<<"The DFS traversal are:";
    vector<int>ans=dfs(adj,V);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}