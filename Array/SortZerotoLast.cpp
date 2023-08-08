#include<bits/stdc++.h>
using namespace std;
vector<int>sortZerotoLast(vector<int>&v)
{
    int n=v.size();
    int  count=0;
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        if(v[i]==0)
        {
            count++;
        }
        else{
            ans.push_back(v[i]);
        }
    }
    while(count>0)
    {
        ans.push_back(0);
        count--;
    }
    return ans;
}
int main()
{
    vector<int>v={34,23,24,2,0,0,5,3,0,0,1,22};
    vector<int>res=sortZerotoLast(v);
    for(auto x:res)
    {
        cout<<x<<" ";
    }
    return 0;
}