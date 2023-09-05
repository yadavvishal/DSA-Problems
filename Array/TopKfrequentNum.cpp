#include<bits/stdc++.h>
using namespace std;
// To find the top  k frequent elments in vector which comes more

int main()
{
    vector<int>nums={1,1,1,2,2,3,4,5};
    int k=2;
    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++)
    {
        mp[nums[i]]++;
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    for(auto x:mp)
    {
        pq.push({x.second,x.first});
        if(pq.size()>k)
        {
            pq.pop();
        }
    }
    while(k>0)
    {
        cout<<pq.top().second<<endl;
        pq.pop();
        k--;
    }
}