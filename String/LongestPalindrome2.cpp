#include<bits/stdc++.h>
using namespace std;
// Longest Palindrome to make by using given letter 
// Better approach
// Time Complexity of O(n)

int LongestPalindrome(string s)
{
    unordered_map<char,int>mp;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    int count=0;
    for(auto x:mp)
    {
        if((x.second)%2!=0)
        {
            count++;
        }
    }
    // agar odd element 1 hoga to tab n return kar denge
    // nhi to n me se jitne odd utna subtract karke +1 kar denge kyoki palindrome me 1 odd ho skta hai
    
    if(count>1)
    {
        int ans=n-count+1;
        return ans;
    }
    return n;
}
int main()
{
    string s="abccccdd";
    int res=LongestPalindrome(s);
    cout<<res;
}