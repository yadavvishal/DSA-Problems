#include<bits/stdc++.h>
using namespace std;
int LCS(string s1,string s2,int n,int m)
{
    int L[n+1][m+1];
   for(int i=0;i<=n;i++)
   {
    for(int j=0;j<=m;j++)
    {
        if(i==0 || j==0)
        {
            L[i][j]=0;
        }
        else if(s1[i-1]==s2[j-1])
        {
            L[i][j]=L[i-1][j-1]+1;
        }
        else{
             L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }
   }
   return L[n][m]; 
}
int main()
{
    string s1 = "AGGTAB";
    string s2 = "GXTXAYB";
    int n=s1.size();
    int m=s2.size();
  
    int ans=LCS(s1,s2,n,m);
    cout<<ans;
}