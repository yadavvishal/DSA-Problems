#include<bits/stdc++.h>
using namespace std;
// To find the quick sort

// Time complexcity O(Nlog*N)

int partition(int arr[],int l,int h)
{
    int Pivot=arr[l];
    int i=l;
    int j=h;
    while(i<j)
    {
        while(arr[i]<=Pivot)
        {
            i++;
        }
        while(arr[j]>Pivot)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[j],arr[l]);
    return j;
}
void quickSort(int arr[],int l,int h)
{
    if(l<h)
    {
        int pivot=partition(arr,l,h);
        quickSort(arr,l,pivot-1);
        quickSort(arr,pivot+1,h);
    }
}
int main()
{
    int arr[]={34,2,5,25,11,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}