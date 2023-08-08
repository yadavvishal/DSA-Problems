/*
#include<bits/stdc++.h>
using namespace std;
// To find the minimum number of deletions to make the two strings equal
//

int MinimumDeletions(int i,int j,string s1,string s2)
{
    if(i>=s1.length() || j>=s2.length())
    {
        return 0;
    }
    if(s1[i]==s2[j])
    {
        return MinimumDeletions(i+1,j+1,s1,s2);
    }
    else{
        return i+min(MinimumDeletions(i+1,j,s1,s2),MinimumDeletions(i,j+1,s1,s2));
    }
}
int main()
{
   string s1 = "geeksforgeeks";
   string s2 = "geeks";

     // Initialize the array with -1
    

    cout<<MinimumDeletions(0,0,s1,s2 );
}
*/

#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int MinimumDeletion(int i,int j,string s1,string s2,int n,int m)
{
    if(i>=s1.length() || j>=s2.length())
    {
        return 0;
    }
    if(s1[i]==s2[j])
    {
        dp[i][j]= 1+MinimumDeletion(i+1,j+1,s1,s2,n,m);
    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }

    else{
        dp[i][j]=max(MinimumDeletion(i+1,j,s1,s2,n,m),MinimumDeletion(i,j+1,s1,s2,n,m));
    }
    return dp[n-1][m-1];
}
int main()
{
    string s1 = "geeksforgeeks";
    string s2 = "geeks";
    memset(dp,-1,sizeof(dp));
    int n=s1.length();
    int m=s2.length();
    cout<<MinimumDeletion(0,0,s1,s2,n,m);

}