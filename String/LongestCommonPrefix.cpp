#include <bits/stdc++.h>
using namespace std;

string  LongestCommonPrefix(string s[],int n)
{
    if(n==0)
    {
        return "";
    }
    if(n==1)
    {
        return s[0];
    }
    sort(s,s+n);
    int slow=s[0].length();
    int fast=s[n-1].length();
    int minn=min(slow,fast);
    int i=0;
    string first=s[0];
    string last=s[n-1];
    while(i<minn && first[i]==last[i])
    {
        i++;
    }
    string ans=s->substr(0,i);
    return ans;
}
int main()
{
    string s[] = {"geeksforgeeks", "geeks",
                  "geek", "geezer"};
    int n=sizeof(s)/sizeof(s[0]);
    string result=LongestCommonPrefix(s,n);
    cout<<result;

}