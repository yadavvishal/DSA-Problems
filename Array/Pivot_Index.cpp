#include<bits/stdc++.h>
using namespace std;
// Find Pivot Index

// The pivot index is the index where the sum of all the numbers strictly to the left of the index
//  is equal to the sum of all the numbers strictly to the index's right.


// pahle totalsum find kar lenge uske baad rightsum me store karenge total sum me se nums[i ] minus karke 
// leftsum minus kareke .phir check karenge agar rightsum = leftsum hai then return index i
// nhi to  leftsum find karte jaayneg or rightsum

int main()
{
    vector<int>nums={1,7,3,6,5,6};// given
    int totalSum=0;
    for(int i=0;i<nums.size();i++)
    {
        totalSum+=nums[i];
    }
    int leftSum=0;
    int index;
    for(int i=0;i<nums.size();i++)
    {
        int rightSum=totalSum-nums[i]-leftSum;
        if(leftSum==rightSum)
        {
           //  return i;
            index=i;
            break;
        }
        leftSum+=nums[i];
    }
     // return -1;

     cout<<index;


    

}