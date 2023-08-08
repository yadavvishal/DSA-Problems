#include<bits/stdc++.h>
using namespace std;
// To find subarray of array
int main()
{
    int arr[]={1,2,3,4};

    int n=sizeof(arr)/sizeof(arr[0]);
    

    for(int i=0;i<n;i++)
    {
        // pick starting point

        for(int j=i;j<n;j++)
        {
            // pick ending point

            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;

}

// time complexicity of O(N^3)