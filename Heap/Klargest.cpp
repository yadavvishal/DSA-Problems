#include<bits/stdc++.h>
using namespace std;
// Time Complexity O(nlogn)

void klargest(int arr[],int n,int k)
{
    sort(arr,arr+n,greater<int>());
    for(int i=0;i<k;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={12, 5, 787, 1, 23};
    int k=2;
    int n=sizeof(arr)/sizeof(arr[0]);
    klargest(arr,n,k);
    return 0;

}