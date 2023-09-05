#include<bits/stdc++.h>
using namespace std;

// Binary Search Approach
// To find the minimum in Sorted Rotated Array
// Time Complexity of O(logn)

int main()
{
    int arr[]={3,4,5,-1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int high=n-1;
    while(low<high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>=arr[high])
        {
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    cout<<arr[low];
}

/*
// Time Complexity of O(N)

    int minn=arr[0];
    for(int i=1;i<n;i++)
    {
        minn=min(minn,arr[i]);
    }
    cout<<minn;
*/