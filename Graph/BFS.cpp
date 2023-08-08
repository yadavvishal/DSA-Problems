#include<bits/stdc++.h>
using namespace std;

// bfs traversal level order trav ke tarah hota hai


vector<int>bfs(vector<int>adj[],int V)
{
    vector<int>v;
    queue<int>q;
    q.push(0);
    vector<int>vis(V,0);
    vis[0]=1;
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        v.push_back(x);
        for(auto it:adj[x])
        {
            if(!vis[it])
            {
                vis[it]=1;
                q.push(it);
            }
        }

    }
    return v;
    
}
void addEdge(vector<int>adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);

}
int main()
{
    int V=6;
    vector<int>adj[V];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,0,3);
    addEdge(adj,2,4);
    cout<<"The bfs traversal of graph is:";
    vector<int>ans=bfs(adj,V);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;


}
    
