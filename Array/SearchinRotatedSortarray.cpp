#include<bits/stdc++.h>
using namespace std;
// To find the element in Rotated Sorted Array
// Time Complexity of o(logN)

int  BinarySearch(int arr[],int start,int end,int key)
{
    if(start>end)
    {
        return -1;
    }
    int mid=(start+end)/2; 
    if(arr[mid]==key)
    {
        return mid;
    }
    // check the mid element is greater than start element or not
    
    if(arr[mid]>=arr[start])
    {
        if(key>=arr[start] && key<=arr[mid])
        {
            return BinarySearch(arr,start,mid-1,key);
        }
        return BinarySearch(arr,mid+1,end,key);
    }
    else{
        if(key>=arr[mid] && key<=arr[end])
        {
            return BinarySearch(arr,mid+1,end,key);
        }
        return BinarySearch(arr,start,mid-1,end);
    }
    return -1;
}
int main()
{
    int arr[]={4,5,6,7,0,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=0;
    int ans=BinarySearch(arr,0,n-1,key);
    cout<<ans;
    
    
}