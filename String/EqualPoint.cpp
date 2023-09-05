#include<bits/stdc++.h>
using namespace std;
// Ti find the index from where the closing bracket from right and opening bracket from left equal

int main()
{
    string str="(())))(";
    int close=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==')')
        {
            close++;
        }
    }
    cout<<close;

}