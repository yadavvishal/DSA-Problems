#include<bits/stdc++.h>
using namespace std;
// To find min ways to climb stairs
// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

// using dynamic Programing

int solve(int n,vector<int>&dp)
{
    if(n<=2)
    {
        return n;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    dp[n]= solve(n-1,dp)+solve(n-2,dp);
    return dp[n];
}
int main()
{
    int n=4;
    // given


    vector<int>dp(n+1,-1);

    int ans=solve(n,dp);
    cout<<ans;
}