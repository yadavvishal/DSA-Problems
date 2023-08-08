#include <bits/stdc++.h>
using namespace std;
// sliding window technique use
// Time Complexity of O(|S|)
// Space Complexity of O(|S|)

int  LongestKuniqueSubstr(string str, int k)
{
    unordered_map<char,int>mp;
    int i=0;
    int j=0;
    int ans=-1;
    while(j<str.length())
    {
        mp[str[j]]++;
        while(mp.size()>k)
        {
            // decrease the frequency

            mp[str[i]]--;
            if(mp[str[i]]==0)
            {
                //  delete the element from map
                
                mp.erase(str[i]);
            }
            i++;
        }
        if(mp.size()==k)
        {
            // get the size of window by j-i+1

            ans=max(ans,(j-i)+1);
        }
        j++;
    }
    return ans;
}
int main()
{
    string str = "aabbcc";
    int k = 2;
    int result=LongestKuniqueSubstr(str,k);
    cout<<result;
}