#include<bits/stdc++.h>
using namespace std;

// To find Subarry which having sum Zero
// Time complexicty O(N^2)
// Brute force approach

bool subarrayzeroSum(int arr[],int n)
{
    
    for(int i=0;i<n;i++)
    {
        // update sum
        int sum=0;
        for(int j=i+1;j<n;j++)
        {
            sum+=arr[j];
            if(sum==0)
            {
                return  true;
            }
        }
    }
    return false;
}
int main()
{
    
    int arr[] = {4, 2, -3, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    if(subarrayzeroSum(arr,n))
    {
        cout<<"Subarray having sum Zero";
    }
    else{
        cout<<"Subarray not having sum zero";
    }
    return 0;
}