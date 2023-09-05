#include<bits/stdc++.h>
using namespace std;
// Time Complexity of O(N)
// Space Complexity of O(N)
int solve(int arr[],int n)
{
    int left[n];
    // left name se array banaynge jisme array ke left se max element store karte jaayenge left array me

    left[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        left[i]=max(left[i-1],arr[i]);

    }
    // right array banayenge jisme array ke right se jo max element hai usko store karte jayenge right array me
    
    int right[n];
    right[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        right[i]=max(right[i+1],arr[i]);
    }

    int ans=0;
    // left array or right me se jo minimum element hai usko arr[i] minus karenge or usko store karte jaayenge
    
    for(int i=0;i<n;i++)
    {
        ans+=(min(left[i],right[i])-arr[i]);
    }
    return ans;
}
int main()
{
    int arr[]={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=solve(arr,n);
    cout<<ans;
}