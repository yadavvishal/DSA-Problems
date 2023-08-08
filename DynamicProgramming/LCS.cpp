#include<bits/stdc++.h>
using namespace std;
// using Recursive approach
// Time Complexity of O(2^m*n)

int LCS(string s1,string s2,int n1, int n2)
{
    if(n1==0 || n2==0)
    {
        return 0;
    }
    if(s1[n1-1]==s2[n2-1])
    {
        return 1+LCS(s1 ,s2 , n1-1, n2-1);
    }
    else{
        return max(LCS(s1,s2,n1-1,n2),LCS(s1,s2, n1,n2-1));
    }
}
int main()
{
    string s1 = "AGGTAB";
    string s2 = "GXTXAYB";
    int n1=s1.size();
    int n2=s2.size();
    int ans=LCS(s1,s2,n1,n2);
    cout<<ans;
    return 0;
}