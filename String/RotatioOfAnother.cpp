#include<bits/stdc++.h>
using namespace std;
// find rotatio of one string to another string

int main()
{
    string s1;
    string s2;
    cin>>s1;
    cin>> s2;
    int l1=s1.length();
    int l2=s2.length();
    if(l1!=l2)
    {
        cout<<"Not rotation of another string";
    }
    else{
        string temp=s1+s2;
        if(temp.find(s2)!=string::npos)
        {
            cout<<"Yes";
        }
        else{
            cout<<"NO";
        }
    }
    return 0;
}