#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int arr[]={2,5,22,8,4,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    cout<<arr[0]<<" "<<arr[n-1];
    return 0;


}


// Time complexixty of O(nlogn);