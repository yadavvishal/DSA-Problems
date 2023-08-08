#include<bits/stdc++.h>
using namespace std;
// klargest ke liye ...minheap banate hai
// ksmallest ke liye ...maxheap banate hai

// To find Klargest so we make min heap
// Time Complexity of O(nlogk)

int findKlargest(int arr[],int n,int k)
{
    // minheap using priority queue

    priority_queue<int,vector<int>,greater<int>>pq;
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
    int arr[]={2,4,66,22,1,88,44};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
   int ans= findKlargest(arr,n,k);
   cout<<ans;
}