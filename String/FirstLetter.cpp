#include<bits/stdc++.h>
using namespace std;
// To print the first letter of every word in string

int main()
{
    string str="My name is Vishal";
    string ans;
    ans.push_back(str[0]);
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        {
            ans+=str[i+1];
        }
    }
    cout<<ans;

}