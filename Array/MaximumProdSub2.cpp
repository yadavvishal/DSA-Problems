#include<bits/stdc++.h>
using namespace std;
// Time Complexity of O(N)

int MaximumProdSub(int arr[],int n)
{
    int prefix=1;
    int suffix=1;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(prefix==0)
        {
            prefix=1;
        }
        if(suffix==0)
        {
            suffix=1;
        }
        prefix=prefix*arr[i];
        suffix=suffix*arr[n-i-1];
        maxi=max(maxi,max(prefix,suffix));
    }
    return maxi;
}
int main()
{
    int arr[]={2,3,-2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=MaximumProdSub(arr,n);
    cout<<ans;
}