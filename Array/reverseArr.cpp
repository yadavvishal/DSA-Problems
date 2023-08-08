#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={12,5,3,7,9,44};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    return 0;
}

// time complexicity of O(N);