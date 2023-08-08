#include<bits/stdc++.h>

using namespace std;
int check(string s)
{
    vector<int>v(926,0);
    for(int x:s)
    {
        v[x-97]++;
    }
    for(int i=0;i<v.size();i++)
    {
        if(!v[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s="The quick brown fox jumps over the dog";
    if(check(s)==true)
    {
        cout<<"Panagram hai";
    }
    else{
        cout<<"Not panagram";
    }
    return 0;
}