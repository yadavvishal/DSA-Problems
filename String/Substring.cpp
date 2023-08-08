#include<bits/stdc++.h>
using namespace std;
// substring is contiguous element of string

// Time complexicity of O(N^2)
// Better approach
void substring(string s)
{
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        string substr;
        for(int j=i;j<n;j++)
        {
            substr+=s[j];
            cout<<substr<<endl;
        }
    }
}
int main()
{
    string s="abc";
    substring(s);
    return 0;
}