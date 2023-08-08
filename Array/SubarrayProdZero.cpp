#include<bits/stdc++.h>
using namespace std;
void SubarrayProdZero(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            cout<<"Longest Subarray whose prod Zero are:"<<n;
            count++;
            break;
        }
    }
    if(count==0)
    {
        cout<<"Not present";
    }
    
}
int main()
{
    int arr[] = { 1, 2, 3, 0, 1, 2, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    SubarrayProdZero(arr,n);
    return 0;
}