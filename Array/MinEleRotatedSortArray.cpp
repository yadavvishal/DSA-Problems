#include<bits/stdc++.h>
using namespace std;
// To find the Minimum Element in Rotated Sorted Array
// Time Complexity of O(logN)

int BinarySearch(int arr[],int start,int end)
{
    // agar 1 element last se small hoga means array sorted hai then return karenge 1 element

     if(arr[start]<=arr[end])
     {
        return arr[start];
     }

    while(start<=end)
    {
        int mid=(start+end)/2;
        // agar mid element small hai previous element se then return karenge mid element
        // or index 0 se big hona chaiye means 1 element nhi hoga 
        
        if(mid-1>=0 && arr[mid]<arr[mid-1])
        {
            return arr[mid];
        }
        if(arr[mid]>arr[end])
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main()
{
    int arr[]= {4,5,6,7,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<BinarySearch(arr,0,n-1);
}