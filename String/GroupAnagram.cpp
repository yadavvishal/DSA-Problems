#include<bits/stdc++.h>
using namespace std;
// To find the Group of Anagram which  contains similar words make group
// See hello word video


int main()
{
    vector<string>str= {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>>ans;
    unordered_map<string,vector<string>>mp;
    for(auto x:str)
    {
        string temp=x;
        sort(x.begin(),x.end());
        // map[key,value]

        mp[x].push_back(temp);

    }
    for(auto x:mp)
    {
        //  x.first contins original 
        // x.second contain vector of string

        vector<string>temp=x.second;
        ans.push_back(temp);
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<"[";
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"]";
    }



}