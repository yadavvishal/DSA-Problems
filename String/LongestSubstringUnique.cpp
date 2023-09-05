#include<bits/stdc++.h>
using namespace std;
// TO find longest Substring with Distinct characters

// Time Complexity of O(S);
//Space Complexity of O(k)

// Use Sliding window to solve this problem

int main()
{
    string S= "geeksforgeeks";
    int i=0;
    int j=0;
    int len=0;
    int n=S.length();
    unordered_map<char,int>mp;
    while(j<n)
    {
        mp[S[j]]++;
        while(mp[S[j]]>1)
        {
            mp[S[j]]--;
            i++;
        }
        if(len<j-i+1)
        {
            len=j-i+1;
        }
        j++;

    }
    cout<<len;
}