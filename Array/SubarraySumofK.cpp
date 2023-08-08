#include<bits/stdc++.h>
using namespace std; 

// Longest Subarray with given Sum K find..
// Brute force approach
// Time Complexicity of O(N^2)
// 

int subarrayofSum(int arr[],int n,int k)
{
    int maxlength=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        // update the sum

        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum==k)
            {
                maxlength=max(maxlength,j-i+1);
            }
        }
    }
    return maxlength;
}
int main()
{
    
    int arr[] = {10, 5, 2, 7, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 15;
    int ans=subarrayofSum(arr,n,k);
    cout<<ans;
    return 0;
}