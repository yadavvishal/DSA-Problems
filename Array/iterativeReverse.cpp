#include<bits/stdc++.h>
using namespace std;

void reverseArr(int arr[],int start,int end)
{
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    
}
int main()
{
    int arr[]={10,5,7,8,2,44};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverseArr(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

// time complexicity of O(N);
