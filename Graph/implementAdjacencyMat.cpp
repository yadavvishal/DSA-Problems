#include<bits/stdc++.h>
using namespace std;
int vertArr[20][20];

void displayMat(int V)
{
    for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            cout<<vertArr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void addEdge(int u,int v)
{
    vertArr[u][v]=1;
    vertArr[v][u]=1;
}
int main()
{
    int V=6;
    addEdge(0,4);
    addEdge(0,3);
    addEdge(1,2);
    addEdge(1,4);
    addEdge(1,5);
    addEdge(2,3);
    addEdge(2,5);
    addEdge(2,5);
    addEdge(5,3);
    displayMat(V);
    return 0;
}