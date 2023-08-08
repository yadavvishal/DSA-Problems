#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={34,53,26,237,31};
    int n=sizeof(arr)/sizeof(arr[0]);
    // sort the increasing order
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // sort array in decreasing order
    sort(arr,arr+n,greater<int>());

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}