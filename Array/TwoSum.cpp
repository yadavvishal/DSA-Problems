#include<bits/stdc++.h>
using namespace std;
// Timr Complexity of O(N)
// To find the index of two number whose sum == targetsum

vector<int>findTwoSum(int arr[],int target,int n)
{
    
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        if(mp.find(target-arr[i])!=mp.end())
        {
            return {i,mp[target-arr[i]]};
        }
        mp[arr[i]]=i;
    }
    // if not find the solution then return empty vector
    
    return {};
}

int main()
{
    int arr[]={2,7,11,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=9;
    vector<int>ans=findTwoSum(arr,target,n);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}