#include<bits/stdc++.h>
using namespace std;
// Better approach
// Time Complexicity of O(N)
// To find Subarray given sum 0
// set use here

bool SubarraySum(int arr[],int N)
{
    unordered_set<int>s;
    int sum=0;
    for(int i=0;i<N;i++)
    {
        sum+=arr[i];
        if(sum==0 || s.find(sum)!=s.end())
        {
            return true;
        }
        s.insert(sum);
    }
    return false;
}
int main()
{
    int arr[] = {-3, 2, 3, 1, 6};
    int N = sizeof(arr) / sizeof(arr[0]);
    if(SubarraySum(arr,N))
    {
        cout<<"Subarray Sum exists";
    }
    else{
        cout<<"Subarray Sum not exists";
    }
    return 0;
}