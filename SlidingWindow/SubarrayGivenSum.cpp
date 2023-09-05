#include<bits/stdc++.h>
using namespace std;

// To find the subarray range in which the sum is equal to target sum
// using sliding approach
// Time Complexity of O(N)

int main()
{
    int arr[]={ 15, 2, 4, 8, 9, 5, 10, 23 };
    int targetsum=23;


    int n=sizeof(arr)/sizeof(int);
    int i=0;
    int j=0;
    int sum=0;
    vector<int>ans;
    while(j<n)
    {
        while(sum<targetsum && j<n)
        {
            sum+=arr[j];
            j++;

        }
        if(sum=targetsum )
        {
            ans.push_back(i+1);
            ans.push_back(j);
            break;
        }
        while(sum>targetsum && i<j)
        {
            sum-=arr[i];
            i++;
        }
        if(sum==targetsum )
        {
            ans.push_back(i+1);
            ans.push_back(j);
            break;
        }
    }
     cout<<" The range in which the sum are equal to target :";
    for(auto x:ans)
    {
       cout<<x <<" ";
    }
}