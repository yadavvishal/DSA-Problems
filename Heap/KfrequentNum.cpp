#include<bits/stdc++.h>
using namespace std;
// Time Complexity O(nlogk)
// Min heap use to solve the problem

void findKfrequentNum(int arr[],int n,int k)
{
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        pq.push({it->second,it->first});
        if(pq.size()>k)
        {
            pq.pop();
        }

    }
    while(k>0)
    {
        cout<<pq.top().second<<" ";
        pq.pop();
        k--;
    }
}
int main()
{
    int arr[]={1,1,1,2,2,3};
    int  n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    findKfrequentNum(arr,n,k);
}