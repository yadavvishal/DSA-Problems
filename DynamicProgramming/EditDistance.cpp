#include<bits/stdc++.h>
using namespace std;
// Edit Distance Problem
//  the minimum number of operations required to convert str1 to str2.

// Memoization Approach

int solve(int i,int j,string str1, string str2, vector<vector<int>>&dp)
{
    if(i<0)
    {
        return j+1;
    }
    if(j<0)
    {
        return i+1;
    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    if(str1[i]==str2[j])
    {
        return dp[i][j]=solve(i-1,j-1,str1,str2,dp);
    }
    return dp[i][j]=1+min(solve(i-1,j,str1,str2,dp),min(solve(i,j-1,str1,str2,dp),solve(i-1,j-1,str1,str2,dp)));
}
int main()
{
    string str1="horse";
    string str2="ros";

    int n=str1.length();
    int m=str2.length();
    vector<vector<int>>dp(n,vector<int>(m,-1));
    cout<<solve(n-1,m-1,str1,str2,dp);
}


// Tabulation Approach
/*
int main()
{
    string str1="horse";
    string str2="ros";
    int n=str1.length();
    int m=str2.length();
    // 1 based indexing that's why use n+1,m+1

    vector<vector<int>>dp(n+1,vector<int>(m+1,0));

    for(int i=0;i<=n;i++)
    {
        dp[i][0]=i;
    }
    for(int j=0;j<=m;j++)
    {
        dp[0][j]=j;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(str1[i-1]==str2[j-1])
            {
                dp[i][j]=dp[i-1][j-1];
            }
            else{
                dp[i][j]=1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
            }
        }
    }
    cout<<dp[n][m];
}
*/

