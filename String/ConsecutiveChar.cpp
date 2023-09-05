#include<bits/stdc++.h>
using namespace std;
// find the longest consecutive char

int main()
{
    string s="leetcode";
    char ch=s[0];
    int count=1;
    int ans=INT_MIN;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]==ch)
        {
            count++;
        }
        else{
            ch=s[i];
            count=1;
        }
        ans=max(ans,count);
    }
    ans=max(ans,count);
    // return ans;

    cout<<ans;
}