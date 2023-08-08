#include <bits/stdc++.h>
using namespace std;

//Time Complexicity O(N*logN)
// Recursive solution

void merge(int arr[], int l, int mid, int r)
{
    int B[r];
    // empty B array form
    int i = l;
    int j = mid + 1;
    int k = l;
    while (i<=mid && j <= r)
    {
        if (arr[i] < arr[j])
        {
            B[k] = arr[i];
            i++;
        }
        else
        {
            B[k] = arr[j];
            j++;
        }
        k++;
    }
    // ye chalega jab while condition false hogi
    
    if (i > mid)
    {
        while (j <= r)
        {
            B[k] = arr[j];
            j++;
            k++;
        }
    }
    else
    {
       while(i<=mid)
       {
        B[k]=arr[i];
        i++;
        k++;
       }
    }
    // copy B array value to array A
    for(int k=l;k<=r;k++)
    {
        arr[k]=B[k];
    }
   
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}
int main()
{
    int arr[] = {35, 24, 23, 6, 9, 33};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"Array after sorting are: "<<endl;
    mergeSort(arr, 0, n - 1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}