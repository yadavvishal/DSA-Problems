#include<bits/stdc++.h>
using namespace std;
// using hashing 
int main()
{
    int arr[]={34,6,8,11,88,99,55,34};
    int k=34;
    int n=sizeof(arr)/sizeof(arr[0]);
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    for(auto it:mp)
    {
        if(it.first==k)
        {
            cout<<"k occur "<<it.second;
        }
        else{
            continue;
        }

    }
    return 0;


}
// time complexicity of O(N);