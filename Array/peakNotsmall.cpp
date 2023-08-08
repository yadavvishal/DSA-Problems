// find the peak element that is not small then its neighbours

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
        {
            v.push_back(i);
        }

    }
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    return 0;

}