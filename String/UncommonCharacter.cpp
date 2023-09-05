#include<bits/stdc++.h>
using namespace std;

// To find the uncommon strings which is not come in each other in sort order

int main()
{
    string a="geeksforgeeks";
    string b="geeksquiz";
    map<char,int>mp1;
    map<char,int>mp2;
    for(int i=0;i<a.length();i++)
    {
        mp1[a[i]]++;
    }
    for(int i=0;i<b.length();i++)
    {
        mp2[b[i]]++;
    }
    string ans="";
    for(auto x:mp1)
    {
        if(mp2.find(x.first)==mp2.end())
        {
            ans+=x.first;
        }
    }
    for(auto x:mp2)
    {
        if(mp1.find(x.first)==mp1.end())
        {
            ans+=x.first;
        }
    }
    sort(ans.begin(),ans.end());
    if(ans=="")
    {
        cout<<-1;
    }
    cout<<ans;

}