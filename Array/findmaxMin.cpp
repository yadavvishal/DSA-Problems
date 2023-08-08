#include<bits/stdc++.h>
using namespace std;

void getmin(int arr[],int n)
{
    int res=arr[0];
    for(int i=0;i<n;i++)
    {
        res=min(res,arr[i]);
    }
    cout<<res<<endl;
    return;
}
void getmax(int arr[],int n)
{
    int res=arr[0];
    for(int i=0;i<n;i++)
    {
        res=max(res,arr[i]);
    }
    cout<<res;
    return;
}
int main()
{
    int arr[]={2,6,4,9,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    getmin(arr,n);
    getmax(arr,n);
    return 0;
}
// time comlexicity of O(N);