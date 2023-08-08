#include<bits/stdc++.h>
using namespace std;
// Time Complexity of O(N)

int checkPalindrome(string s,int n)
{
    string str=s;
    reverse(s.begin(),s.end());
    int i=0;
    while(n)
    {
        if(s[i]!=str[i])
        {
            return false;
        }
        n--;
        i++;
    }
    return true;
}
int main()
{
   // string s="aba";
    string s="dccaccd";
    // string s="abcba";

    int n=s.length();
    int ans=checkPalindrome(s,n);
    cout<<ans<<endl;
}