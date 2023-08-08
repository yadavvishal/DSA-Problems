#include<bits/stdc++.h>
using namespace std;
// Solve the problem in time Complexity of O(nlogk)
// for Ksmallest we use max heap
// stl max heap

int  findKsmallest(int arr[],int k,int n)
{

    priority_queue<int>pq;
    for(int i=0;i<n;i++)
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
    int arr[]={34,7,1,22,5,6,9,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    int ans=findKsmallest(arr,k,n);
    cout<<ans;
    return 0;
}