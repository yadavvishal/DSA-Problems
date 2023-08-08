#include<bits/stdc++.h>
using namespace std;
// using dp of memoization
// Time Complexity of O(n*m)
// Space Complexity of (n*m)
// by using dp the overlap problem is solved

int LCS(string s1,string s2,int n,int m,vector<vector<int>>&dp)
{
    if(n==0|| m==0)
    {
        return 0;
    }
    if(s1[n-1]==s2[m-1])
    {
        dp[n][m]=1+LCS(s1,s2,n-1,m-1,dp);
    }
    if(dp[n][m]!=-1)
    {
        return dp[n][m];
    }
    
    return dp[n-1][m-1]=max(LCS(s1,s2,n-1,m,dp),LCS(s1,s2,n,m-1,dp));
    
    
}
int main()
{
    string s1 = "AGGTAB";
    string s2 = "GXTXAYB";
    int n=s1.size();
    int m=s2.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1,-1));
    int ans=LCS(s1,s2,n,m, dp);
    cout<<ans;
    return 0;
}