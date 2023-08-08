#include<bits/stdc++.h>
using namespace std;

// To find the length of longest subarray 
// Time Complexcity O(N)

void lengthofLongSubarray(int arr[],int n)
{
    int temp=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            temp++;
        }
        else{
            ans=max(temp,ans);
            temp=0;
        }
    }
    ans=max(temp,ans);
    cout<<"The length of Longest subarray are: "<<ans;
}
int main()
{
    int arr[]={2, 3, 4, -1, -2, 1, 5, 6, 3};
    int n=sizeof(arr)/sizeof(arr[0]);
    lengthofLongSubarray(arr,n);

}