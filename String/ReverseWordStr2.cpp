#include<bits/stdc++.h>
using namespace std;
// Time Complexity of O(N^2)
// Best approach to solve the problem without using the Stack

string ReverseWord(string s)
{
    int n=s.length();
    int i=0;
    string ans="";
    while(i<n)
    {
        string temp="";
        while(s[i]==' ' && i<n)
        {
            i++;
        }
        while(s[i]!=' ' && i<n)
        {
            temp+=s[i];
            i++;
        }
        if(temp.size()>0)
        {
            if(ans.size()==0)
            {
                ans=temp;

            }
            else{
                ans=temp+' '+ans;
            }
        }
    }
    return ans;
}
int main()
{
   string s="the sky is blue";
   string res=ReverseWord(s);
   cout<<res;
}
