#include<bits/stdc++.h>
using namespace std;

// To reverse the string and not contains duplicate elmeents and spaces


int main()
{
    string s="GEEKS FOR GEEKS";
    reverse(s.begin(),s.end());
    string ans="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=' ')
        {
            if(ans.find(s[i])==string::npos)
            {
                ans+=s[i];
            }
        }
    }
    cout<<ans;
}