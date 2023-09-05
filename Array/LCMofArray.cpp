#include<bits/stdc++.h>
using namespace std;
// To find the LCM of given elment in Array

// find the GCD of two number
long long gcd(long long a,long long b)
{
    if(a==0)
    {
        return b;
    }
    return gcd(b%a,a);
}
// find the LCM  of two number
long long lcm(long long a,long long b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
    int arr[]={1,2,8,3};
    int N=4;
    long long ans=1;
    long long mod=1000000007;
    for(int i=0;i<N;i++)
    {
        ans=lcm(ans,arr[i])%mod;
    }
    cout<<ans;
}