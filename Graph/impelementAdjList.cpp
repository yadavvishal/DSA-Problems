#include <bits/stdc++.h>
using namespace std;

void displayList(list<int>adjList[],int V)
{
    for(int i=0;i<V;i++)
    {
        cout<<i<<"->";
        list<int>::iterator it;
        for(it=adjList[i].begin();it!=adjList[i].end();it++)
        {
            cout<<*it<<" ";
        }
         cout<<endl;
    }
   
}
void addEdge(list<int>adjList[],int u,int v)
{
    adjList[u].push_back(v);
    adjList[v].push_back(u);

}
int main()
{
    int V = 6;

    //there are 6 vertices in the graph
   //create an array of lists whose size is 6


    list<int> adjList[V];
    addEdge(adjList, 0, 3);
    addEdge(adjList, 0, 4);
    addEdge(adjList, 1, 3);
    addEdge(adjList, 1, 2);
    addEdge(adjList, 2, 3);
    addEdge(adjList, 2, 1);
    addEdge(adjList, 2, 5);
    addEdge(adjList, 3, 1);
    addEdge(adjList, 3, 4);
    displayList(adjList,V);
}