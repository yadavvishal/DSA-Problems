#include<bits/stdc++.h>
using namespace std;
// To find Largest Subarray whose sum is greater
// Kadan's Algorithm
// Time complecity of O(N)
// Best approach

int largestSubarraySum(int arr[],int N)
{
    int maxsum=0;
    int currsum=0;
    for(int i=0;i<N;i++)
    {
        currsum+=arr[i];
        if(currsum>maxsum)
        {
            maxsum=currsum;
        }
        if(currsum<0)
        {
            currsum=0;
        }

    }
    return maxsum;

}
int main()
{
    int arr[] = { -2, -3, 4, -1, -2, 1, 5, -3 };
    int N= sizeof(arr) / sizeof(arr[0]);
    int ans=largestSubarraySum(arr,N);
    cout<<"The largest Subarray sum is: "<<ans;
    return 0;
}