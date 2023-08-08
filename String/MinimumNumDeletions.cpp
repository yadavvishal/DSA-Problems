#include<bits/stdc++.h>
using namespace std;
// To find the minimum Number of Deletions to make the string Palindrome
// Time Complexity of O(2^n)
// Space complexity of O(N)

int solve(int i,int j,string s)
{
    if(i>=j)
    {
        return 0;
    }
    if(s[i]==s[j])
    {
        return solve(i+1,j-1,s);
    }
    else{
        return 1+min(solve(i+1,j,s),solve(i,j-1,s));
    }
}
int ToMakePalindrome(string s)
{
    int n=s.length();
    return solve(0,n-1,s);
}
int main()
{
    string s="aebcbda";
    cout<<ToMakePalindrome(s);
    return 0;
}