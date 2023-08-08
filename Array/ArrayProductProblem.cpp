#include<bits/stdc++.h>
using namespace std;
// ArrayProductProblem is product of all element except itself and print it

void ArrayofProduct(int arr[],int  n)
{
    int prefix[n];
    prefix[0]=1;
    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]*arr[i-1];
    }
    int suffix[n];
    suffix[n-1]=1;
    for(int i=n-2;i>=0;i--)
    {
        suffix[i]=suffix[i+1]*arr[i+1];
    }
    int product[n];
    for(int i=0;i<n;i++)
    {
        product[i]=prefix[i]*suffix[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<product[i]<<" ";
    }

}
int main()
{
    int arr[]={10, 3, 5, 6, 2};
    int n=sizeof(arr)/sizeof(arr[0]);
    ArrayofProduct(arr,n);
}
