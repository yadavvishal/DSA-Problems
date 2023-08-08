#include<bits/stdc++.h>
using namespace std;

// To find the product of all subarray are 
// Time Complexicity O(N^2)

void productofallSubarray(int arr[],int n){
    long long int ans=1;
    for(int i=0;i<n;i++)
    {
        int prod=1;
        
        for(int j=i;j<n;j++)
        {
            prod=prod*arr[j];
            ans*=prod;

        }
    }
    cout<<"The product of all Subarray are: "<<ans;
}
int main()
{
    int arr[]={2, 4};
    int n=sizeof(arr)/sizeof(arr[0]);
    productofallSubarray(arr,n);
    return 0;
}
