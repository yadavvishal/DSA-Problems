#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s=" My name is Vishal";
    string ans="";
    int n=s.length();
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]==' ' && !ans.empty())
        {
            break;
        }
        if(s[i]!=' ')
        {
            ans+=s[i];
        }
    }
    cout<<ans.length()<<endl;
    cout<<ans;
}