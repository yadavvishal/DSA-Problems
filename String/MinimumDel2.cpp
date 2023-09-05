#include<bits/stdc++.h>
using namespace std;
// Time Complexity of O(N^K)

// Minimum deletion in string to make the string palindrome
// Memoization Approach use
 
int solve(int i,int j,string S,vector<vector<int>>&dp)
{
    if(i>=j)
    {
        return 0;
    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    if(S[i]==S[j])
    {
        return dp[i][j]= solve(i+1,j-1,S,dp);
    }
    else{
        return dp[i][j]=1+min(solve(i+1,j,S,dp),solve(i,j-1,S,dp));
    }
}
int main()
{
    string S="aebcbda";
    int n=S.length();
    vector<vector<int>>dp(n,vector<int>(n,-1));
    int ans=solve(0,n-1,S,dp);
    cout<<ans;
}
