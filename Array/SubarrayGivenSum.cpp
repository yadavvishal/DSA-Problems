#include<bits/stdc++.h>
using namespace std;
// To find the Subarray whose sum is equal to given sum
// Time Complexity of O(N^2)
void SubarrayGivenSum(int arr[],int n,int sum)
{
   
    vector<int>v;
    for(int i=0;i<n;i++)
    {
       int currsum=0;
       for(int j=i;j<n;j++)
       {
            currsum+=arr[j];
            if(currsum==sum)
            {
                v.push_back(i+1);
                v.push_back(j+1);
            }
            else 
            {
                if(currsum>sum){
                    break;
                }
            }
           
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    
}
int main()
{
    int arr[]={1,2,3,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=12;
    SubarrayGivenSum(arr,n,sum);
    return 0;
}