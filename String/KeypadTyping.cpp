#include<bits/stdc++.h>
using namespace std;
// TO find the Keypad Number which is written on Keypad Mobile

int main()
{
    string s= "GEEKSFORGEEKS";
    int n=s.length();
    string str="";
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A' || s[i]=='B' || s[i]=='C')
        {
            str=str+"2";
        }
         if(s[i]=='D' || s[i]=='E'|| s[i]=='F')
        {
            str+="3";
        }
         if(s[i]=='G' || s[i]=='H' || s[i]=='I')
        {
            str+="4";
        }
         if(s[i]=='J' || s[i]=='K' || s[i]=='L')
        {
            str+="5";
        }
         if(s[i]=='M' || s[i]=='N' || s[i]=='O')
        {
            str+="6";
        }
         if(s[i]=='P' || s[i]=='Q' || s[i]=='R' || s[i]=='S')
        {
            str+="7";
        }
         if(s[i]=='T' || s[i]=='U' || s[i]=='V')
        {
            str+="8";
        }
         if(s[i]=='W' || s[i]=='X' || s[i]=='Y' || s[i]=='Z')
        {
            str+="9";
        }
        
    }
    cout<<str;
}