#include<bits/stdc++.h>
using namespace std;
// To find the combination whose elment sum is equal to target
// Using Backtracking

void solve(int i,int sum,vector<int>&subset, vector<vector<int>>&ans, vector<int>&arr, int target)
{
    if(sum==target)
    {
        ans.push_back(subset);
        return;
    }
    if(i>=arr.size())
    {
        return;
    }
    if(sum>target)
    {
        return ;
    }
    // not pick element
    solve(i+1,sum,subset,ans,arr,target);

    // pick the element
    sum+=arr[i];
    subset.push_back(arr[i]);
    // not increse of i because in future it will use again

    solve(i,sum,subset,ans,arr,target);
    sum-=arr[i];
    subset.pop_back();

}
int main()
{
    vector<int>arr={2,3,6,7};
    int target=7;
    // Given

    int sum=0;
    vector<int>subset;
    vector<vector<int>>ans;

    solve(0,sum,subset,ans,arr,target);
    // return ans
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }


}