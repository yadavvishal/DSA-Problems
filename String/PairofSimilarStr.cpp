#include<bits/stdc++.h>
using namespace std;
// Count pair of similar string in which both the strings contain same elment

int main()
{
    vector<string>words={"aabb","ab","ba"};
    int count=0;
    map<string,int>mp;
    for(int i=0;i<words.size();i++)
    {
        set<char>st;
        for(int j=0;j<words[i].size();j++)
        {
            st.insert(words[i][j]);
        }
        string str="";
        for(auto it:st)
        {
            str+=it;
        }
        mp[str]++;

    }
    for(auto x:mp)
    {
        int y=((x.second-1)*(x.second))/2;
        count+=y;
    }
    // return count;
    cout<<count;
}



// Brute fore

/*bool check(string a,string b)
{
    set<char>st1(a.begin(),a.end());
    set<char>st2(b.begin(),b.end());
    if(st1==st2)
    {
        return true;
    }
    return false;
}
int main()
{
    vector<string>words={"aabb","ab","ba"};

    int count=0;
    for(int i=0;i<words.size();i++)
    {
        for(int j=i+1;j<words.size();j++)
        {
            if(check(words[i],words[j]))
            {
                count++;
            }
        }
    }
    cout<<count;
}
*/