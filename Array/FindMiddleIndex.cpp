#include<bits/stdc++.h>
using namespace std;
// To find the middle index from which the left part sum  is equal to right part sum

int main()
{
    vector<int>nums={2,3,-1,8,4};
    int leftsum=0;
    int sum;
    for(auto x:nums)
    {
        sum+=x;
    }
    
    for(int i=0;i<nums.size();i++)
    {
        if(leftsum==sum-nums[i])
        {
            cout<<i;
            break;
        }
        leftsum+=nums[i];
        sum=sum-nums[i];
    }
    
}