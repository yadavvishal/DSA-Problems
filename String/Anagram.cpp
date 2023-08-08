#include <bits/stdc++.h>
using namespace std;
bool CheckAnagram(string str1, string str2, int k)
{
    if(str1.length()!=str2.length())
    {
        return false;
    }
    unordered_map<char,int>mp;
    for(int i=0;i<str1.length();i++)
    {
        mp[str1[i]]++;
    }
    for(int i=0;i<str1.length();i++)
    {
        if(mp[str1[i]]==str2[i])
        {

        }
        
    }

    if (count > k)
    {
        return false;
    }
    return true;  
}
int main()
{

    string str1 = "anagram";
    string str2 = "grammar";
    int k = 2;
    bool ans = CheckAnagram(str1, str2, k);
    cout<<ans;
}