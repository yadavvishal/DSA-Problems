#include<bits/stdc++.h>
using namespace std;
// Time Complexity of o(n^3)

int solve(string s)
{
    vector<string>v;
    int n=s.length();
    string str="";
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            string str="";
            for(int k=i;k<=j;k++)
            {
                str=str+s[k];
            }
            v.push_back(str);

        }
        
    }
    int count=0;
   
    for(int i=0;i<v.size();i++)
    {
        int zero=0;
        int one=0;
        int two=0;
        
        string str1=v[i];
        for(int j=0;j<str1.size();j++)
        {
            if(str1[j]=='0')
            {
                zero++;
            }
            if(str1[j]=='1')
            {
                one++;
            }
            if(str1[j]=='2')
            {
                two++;
            }
        }
        if(zero==one && one==two)
        {
            count++;
        }
        
       
    }
    return count;
    
}
int main()
{
    string s="0102010";
    cout<<solve(s);
}