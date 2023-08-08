#include<bits/stdc++.h>
using namespace std;

// To find number of subaarays whose sum is Odd
// Time complexicity of O(N^2)

void subarraywithOddSum(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum%2!=0)
            {
                count++;
            }
        }
        
    }
    cout<<"The number of subarray whose sum is Odd: "<<count;
}
int main()
{
    int arr[]={5, 4, 4, 5, 1, 3};
    int n=sizeof(arr)/sizeof(arr[0]);
    subarraywithOddSum(arr,n);
    return 0;
}