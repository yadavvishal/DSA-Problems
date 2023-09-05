#include<bits/stdc++.h>
using namespace std;
// To find the number in matrix which is minimum in row and maximum in column

int main()
{
    vector<vector<int>>matrix={{3,7,8},{9,11,13},{15,16,17}};
    // given
    // store the frequency
    
    unordered_map<int,int>mp;
    int n=matrix.size();
    int m=matrix[0].size();

    for(int i=0;i<n;i++)
    {
        int minn=INT_MAX;
        for(int j=0;j<m;j++)
        {
            minn=min(minn,matrix[i][j]);
        }
        mp[minn]++;
    }
    
    for(int j=0;j<m;j++)
    {
        int maxx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            maxx=max(maxx,matrix[i][j]);
        }
        mp[maxx]++;
    }
    vector<int>ans;
    for(auto x:mp)
    {
        if(x.second>1)
        {
            ans.push_back(x.first);
        }

    }
    // return ans

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
}