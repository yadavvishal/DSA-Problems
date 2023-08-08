#include<bits/stdc++.h>
using namespace std;
// Time Complexity of O(N^2)
// To find the maximim product Subarray

int MaximumProdSubarray(int arr[],int n)
{
    int maximum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int prod=1;
        for(int j=i;j<n;j++)
        {
            prod=prod*arr[j];
            maximum= max(maximum,prod);

        }
        

    }
    return maximum;
}
int main()
{
    int arr[]={2,3,-2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int  res=MaximumProdSubarray(arr,n);
    cout<<res;
}