#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,res;
    cin>>s1;
    cin>>s2;
    cin>>res;
    string temp=s1+s2;
    int l1=temp.length();
    int l2=res.length();
    if(l1!=l2)
    {
        cout<<"Not shuffle";
    }
    else{
        if(res.find(temp)!=string::npos)
        {
            cout<<"Shuffle of string";
        }
        else{
            cout<<"not shuffle of string";
        }
    }
    return 0;
}