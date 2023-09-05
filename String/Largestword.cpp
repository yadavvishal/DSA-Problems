#include<bits/stdc++.h>
using namespace std;
// To find the largest word in vector dictionary which is present

bool isSubsequence(string dict,string str)
{
    int i=0;
    int j=0;
    int n=dict.length();
    int m=str.length();
    while(i<n && j<m)
    {
        if(dict[i]==str[j])
        {
            i++;
        }
        j++;
        if(i==n)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    vector<string> dict
        = { "ale", "apple", "monkey", "plea" };
    string str = "abpcplea";
    int len=0;
    string ans="";
    sort(dict.begin(),dict.end());
    for(int i=0;i<dict.size();i++)
    {
       if(isSubsequence(dict[i],str))
       {
            if(dict[i].length()>len)
            {
                // len store kar rhe har string ki jo present hai
                // or word bhi store kar rhe
                
                len=dict[i].length();
                ans=dict[i];
            }
       }

    }
    cout<<ans;
    return 0;
     
}