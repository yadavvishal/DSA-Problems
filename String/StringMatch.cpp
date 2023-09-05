#include<bits/stdc++.h>
using namespace std;
// Print all strings in words that is a substring of another word.

int main()
{
    vector<string>words={"mass","as","hero","superhero"};
    
    vector<string>ans;
    for(int i=0;i<words.size();i++)
    {
        for(int j=0;j<words.size();j++)
        {
            // check the occurence of word in string
            
            if(i!=j && words[i].find(words[j])!=string::npos)
            {
                ans.push_back(words[j]);
            }

        }
    }
    set<string>st;
    for(auto x:ans)
    {
        st.insert(x);
    }
    ans.clear();
    for(auto x:st)
    {
        ans.push_back(x);
    }
    // return ans;

    for(auto x:ans)
    {
        cout<<x<<" ";
    }
}