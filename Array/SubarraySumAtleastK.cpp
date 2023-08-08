#include<bits/stdc++.h>
using namespace std;
// Time complexicity of O(N^2)
// to find subarray have sum equal or greater than k

void subarraySumatLeastK(int arr[],int k,int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum>=k)
            {
                count++;
            }
        }
    }
    cout<<"The number of subarray have sum greater of k are:"<<count;

}
int main()
{
    int arr[] = {6, 1, 2, 7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=10;
    subarraySumatLeastK(arr,k,n);
    return 0;
}
