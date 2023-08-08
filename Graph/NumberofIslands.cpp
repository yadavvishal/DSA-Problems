#include <bits/stdc++.h>
using namespace std;

// Using DFS algorithm 
// Time Complexicity O(N*M)

void DFS(vector<vector<int>>&M,int i,int j,int row,int col)
{
    if(i<0 || j<0 || i>row-1 || j>col-1 || M[i][j]!=1)
    {

        return;
    }
    if(M[i][j]==1)
    {
        M[i][j]=0;
        DFS(M,i+1,j,row,col);
        DFS(M,i,j+1,row,col);
        DFS(M,i-1,j,row,col);
        DFS(M,i,j-1,row,col);
        DFS(M,i+1,j+1,row,col);
        DFS(M,i-1,j+1,row,col);
        DFS(M,i+1,j-1,row,col);
        DFS(M,i-1,j-1,row,col);
    }
    
}
int countNumberofIslands(vector<vector<int>> &M)
{
    int row=M.size();
    int col=M[0].size();
    int count=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(M[i][j]==1)
            {
                count++;
                DFS(M,i,j,row,col);
            }
        }
    }
    return count;

}
int main()
{
    vector<vector<int>> M = {{1, 1, 0, 0, 0},
                             {0, 1, 0, 0, 1},
                             {1, 0, 0, 1, 1},
                             {0, 0, 0, 0, 0},
                             {1, 0, 1, 0, 1}};
    int ans=countNumberofIslands(M);
    cout<<"The number of islands are: "<<ans;
    return 0;
}