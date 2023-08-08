#include <bits/stdc++.h>
using namespace std;
bool isValid(vector<vector<int>>&M,int i,int j,int row,int col)
{
    if(i>=0 && i<row && j>=0 && j<col && M[i][j]==0)
    {
        return true;
    }
    return false;
}

void dfs(vector<vector<int>>&M,int i,int j,int row,int col)
{
    M[i][j]=1;
    int ax[4]={1,-1,0,1};
    int ay[4]={0,0,1,-1};
    
    for(int k=0;k<4;k++)
    {
        int nx=i+ax[k];
        int ny=j+ay[k];
        if(isValid(M,nx,ny,row,col))
        {
            dfs(M,nx,ny,row,col)
        }
        
    }

}
int NumberofClosedIsland(vector<vector<int>>M)
{
    int row=M.size();
    int col=M[0].size();
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i*j==0 || i==row-1 || j==col-1)
            {
                if(M[i][j]==0)
                {
                    dfs(M,i,j,row,col);
                }
            }
            
        }
    }
    int ans=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(M[i][j]==0)
            {
                ans++;
                dfs(M,i,j,row,col);
            }
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>>M = { {0, 0, 0, 0, 0, 0, 0, 1},
                  {0, 1, 1, 1, 1, 0, 0, 1},
                  {0, 1, 0, 1, 0, 0, 0, 1},
                  {0, 1, 1, 1, 1, 0, 1, 0},
                  {1, 0, 0, 0, 0, 1, 0, 1} };

    int res=NumberofClosedIsland(M);
    cout<<res;
    
}