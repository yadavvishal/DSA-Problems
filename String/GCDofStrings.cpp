#include<bits/stdc++.h>
using namespace std;
// Time Complexity of O(n)
// First we have to find the gcd of two string size and then find substr 

string GCDofStrings(string s1,string s2)
{
    int n1=s1.size();
    int n2=s2.size();
    if(s1+s2!=s2+s1)
    {
        return "";
    }
    
    string ans=s1.substr(0,gcd(n1,n2));
    return ans;
}
int main()
{
    string s1="ABABAB";
    string s2="ABAB";
    string res=GCDofStrings(s1,s2);
    cout<<res;
}