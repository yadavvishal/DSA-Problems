#include<bits/stdc++.h>
using namespace std;
// To find the number of pair whose absolute difference is k

// Time Complexity of O(N*N)

int main()
{
    int count=0;
    vector<int>nums={3,2,1,5,4};
    int k=2;
    for(int i=0;i<nums.size();i++)
    {
        for(int j=i+1;j<nums.size();j++)
        {
            if(abs(nums[i]-nums[j])==k)
            {
                count++;
            }
        }
    }
    cout<<count;

}