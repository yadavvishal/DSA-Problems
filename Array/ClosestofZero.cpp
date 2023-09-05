#include<bits/stdc++.h>
using namespace std;
// To find the closest Number to Zero

int main()
{
    vector<int>nums={-4,-2,1,2,8};
    int minn=INT_MAX;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++)
    {
        if(abs(nums[i])<abs(minn))
        {
            minn=nums[i];
        }
    }
    cout<<minn;

}

// Approach 2

/*
 int ans=INT_MAX;
        for(auto it:nums)
        {
            if(abs(it)<abs(ans)){
                ans=it;
            }
            else if(abs(it)==abs(ans))
            {
                ans=max(ans,it);
            }
        }
        return ans;
    }
*/