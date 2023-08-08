#include<bits/stdc++.h>
using namespace std;
// Time complexity O(N^2)
// make arr of two pats sorted and unsorted 
// i+1 value ko useke wright position pe layenge

void insertionSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;

    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<< " ";
    }
}
int main()
{
    int arr[]={34,2,24,6,7,9,22,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    return 0;
}