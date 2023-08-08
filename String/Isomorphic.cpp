#include<bits/stdc++.h>
using namespace std;
bool checkIsomorphic(string s1,string s2)
{
    if(s1.length()!=s2.length())
    {
        return false;
    }
    else{
        unordered_map<char,int>mp;
        unordered_map<char,int>mpp;
        for(int i=0;i<s2.length();i++)
        {
            mp[s1[i]]++;
        }
        for(int i=0;i<s1.length();i++)
        {
            mpp[s2[i]]++;
        }
        for(int i=0;i<s1.length();i++)
        {
            if(mp[s1[i]]!=mpp[s2[i]])
            {
                return false;
            }
        }

    }
    return true;
}
int main()
{
    string s1="bbbaaaba";
    string s2="aaabbbba";
    bool ans=checkIsomorphic(s1,s2);
    cout<<ans;
}