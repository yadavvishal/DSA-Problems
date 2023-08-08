#include<bits/stdc++.h>
using namespace std;
// using recursion
/*
int fibonacci(int n)
{
    if(n<=1)
    {
        return n;
    }
    
    return fibonacci(n-1)+fibonacci(n-2);
}
*/
int fibonacci(int n)
{
    int dp[n+2];
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main()
{
    int n=9;
    
    cout<<fibonacci(n);
    
    return 0;
}