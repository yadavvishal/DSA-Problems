#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   for(int i=0;i<5;i++)
   {
    cin>>s[i];
   }
   string ans="";
   for(int i=5;i>0;i--)
   {

    ans+=s[i]+" ";
   }
   for(int i=0;i<5;i++)
   {
    cout<<ans[i];
   }
   return 0;
}