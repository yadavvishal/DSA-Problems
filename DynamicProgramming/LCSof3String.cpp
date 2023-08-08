#include <bits/stdc++.h>
using namespace std;

// To find the Longest Common Subsequence of three strings 
// Time Complexity of O(m*n*o)
// Space Complexity of o(m*n*o)

int dp[100][100][100];
int LCS(string s1,string s2,string s3,int i,int j,int k)
{
    if(i==-1 || j==-1 || k==-1)
    {
        return 0;
    }
    if(dp[i][j][k] !=-1)
    {
        return dp[i][j][k];
    }
    if(s1[i]==s2[j] && s2[j]==s3[k])
    {
        return dp[i][j][k]=1+LCS(s1,s2,s3,i-1,j-1,k-1);
    }
    else{
        return dp[i][j][k]=max(max(LCS(s1,s2,s3,i-1,j,k),LCS(s1,s2,s3,i,j-1,k)),LCS(s1,s2,s3,i,j,k-1));
    }
    
}
int main()
{
    string str1, str2, str3;
    str1 = "geeks";
    str2 = "geeksfor";
    str3 = "geeksforgeeks";
    memset(dp, -1,sizeof(dp));
    int m = str1.length();
    int n = str2.length();
    int o = str3.length();
    cout<<LCS(str1,str2,str3,m-1,n-1,o-1);
}