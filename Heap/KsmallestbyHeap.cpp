#include<bits/stdc++.h>
using namespace std;
int KsmallestbyHeap(int arr[] ,int k,int n)
{
    priority_queue<int>pq;
    for(int i=0;i<=n;i++)
    {
        pq.push(arr[i]);
        if(pq.size()>k)
        {
            pq.pop();
        }
    }
    return pq.top();
}
int main()
{
    int arr[]={2,4,66,22,1,88,44};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int ans=KsmallestbyHeap(arr,k,n);
    cout<<ans;
    return 0;
}

/*
    unordered_map<int,int>mp;
    for(int i=0;i<arr.size();i++)
    {
        mp[arr[i]]++;
    }
    vector<int>v;
    for(auto x:mp)
    {
        if(x.second==1)
        {
            v.push_back(x.first);
        }
    }
    return v;
*/