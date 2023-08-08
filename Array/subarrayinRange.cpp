#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={3,4,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int l=2;
    int r=4;
    vector<int>v;
    
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                if(arr[k]>=l && arr[k]<=r)
                {
                    v.push_back(arr[k]);
                }
            }
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";

    }
    return 0;

}