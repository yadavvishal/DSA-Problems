#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=n+1;
    int total=m*(m+1)/2;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    int missingnum=total-sum;
    cout<<missingnum;

    return 0;

}

// using mathematical formula