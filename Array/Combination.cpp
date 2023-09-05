#include<bits/stdc++.h>
using namespace std;
// find the all combination in 1 to n and the size is k
// using Backtracking
// Best Approach

void solve(int i,int n,int k, vector<int>&v,vector<vector<int>>&ans)
{
    if(i>n)
    {
        if(k==0)
        {
            ans.push_back(v);
        }
        return ;

    }
    // pick the element 
    v.push_back(i);
    solve(i+1,n,k-1,v,ans);
    v.pop_back();

    // skip the elment

    solve(i+1,n,k,v,ans);


}
int main()
{
    int n=4;
    int k=2;

    vector<vector<int>>ans;
    vector<int>v;
    solve(1,n,k,v,ans);

    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}