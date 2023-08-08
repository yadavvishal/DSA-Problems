#include<bits/stdc++.h>
using namespace std;

// Selction Sort 
// Time Complexicity O(N^2)
// selection sort me sabse min ko first postion pr karte jayenge


void selectionSort(int arr[],int n)
{
    int min;
    for(int i=0;i<n;i++)
    {
        // take i as min and tarverse a loop me update the min value if there is any min value in loop

        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        // agar min value same nhi i se to update min ko swap karenge arr[i] se

        if(min!=i)
        {
            swap(arr[i],arr[min]);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={4,8,1,2,99,43,23};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
}