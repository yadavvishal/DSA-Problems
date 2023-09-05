#include<bits/stdc++.h>
using namespace std;
// To find the Permutation of Array 
// Time Complexity of O(N*N!)
// Space Complexity of O(1)
// Using STL function ... next_permutation
void display(int  arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
void  Permutation(int arr[],int n)
{
    // sort array because it gives answer in wright manner
    
    sort(arr,arr+n);
    do{
        display(arr,n);
    }
    while(next_permutation(arr,arr+n));
}
int main()
{
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    Permutation(arr,n);
}