#include<bits/stdc++.h>
using namespace std;
int LongestProdSubarray(int arr[],int n)
{
    int maxlength=0;
    for(int i=0;i<n;i++)
    {
        int prod=1;
        for(int j=i;j<n;j++)
        {
            prod=prod*arr[j];
            maxlength=max(maxlength,j-i+1);
        }
    }
    return maxlength;

}
int main()
{
    int arr[]={2,3,-2,4 };
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=LongestProdSubarray(arr,n);
    cout<<"Longest product Subarray are"<<ans;
    return 0;
}