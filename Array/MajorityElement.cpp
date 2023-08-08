#include<bits/stdc++.h>
using namespace std;
// To find the majority element of which its frequency is greater than n/2

void majorityElement(int arr[],int n)
{
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    int ans=1;
    int res;
    for(auto x:mp)
    {
        if(x.second>ans)
        {
            ans=x.second;
            res=x.first;
        }

    }
    if(ans>n/2)
    {
        cout<<res; 
    }
}
int main()
{
    int arr[]={3, 3, 4, 2, 4, 4, 2, 4, 4};
    int n=sizeof(arr)/sizeof(arr[0]);
    majorityElement(arr,n);
    return 0;
}