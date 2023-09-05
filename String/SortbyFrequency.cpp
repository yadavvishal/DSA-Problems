#include<bits/stdc++.h>
using namespace std;
// To sort the string by frequency in decreasing order by freq

string solve(string s)
{
    unordered_map<char,int>mp;
    for(int i=0;i<s.length();i++)
    {
        mp[s[i]]++;
    }
    priority_queue<pair<int,char>>pq;
    for(auto it:mp)
    {
        pq.push({it.second,it.first});
    }
    string str="";
    while(!pq.empty())
    {
        auto temp=pq.top();
        int freq=temp.first;
        char ch=temp.second;
        pq.pop();

        // string mulitply the ch character by freq and convert to string 
        // example 2*b=bb
        str+=string(freq,ch);

    }
    return str;
}
int main()
{
    string s="Aabb";
    string ans=solve(s);
    cout<<ans;
}