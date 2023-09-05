#include<bits/stdc++.h>
using namespace std;
// Merge the two string alternate vise 

int main()
{
    string a="heloo";
    string b="Byyee";
    int start=0;
    int end=0;
    string str="";
    while(start<a.length() && end<b.length())
    {
        str+=a[start];
        str+=b[end];
        start++;
        end++;
    }
    while(start<a.length())
    {
        str+=a[start];
        start++;
    }
    while(end<b.length())
    {
        str+=b[end];
        end++;
    }
    cout<<str;

}