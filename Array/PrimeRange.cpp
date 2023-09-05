#include<bits/stdc++.h>
using namespace std;
// To find the total Prime Number between 1 to 100

bool isPrime(int n)
{
    if(n==0 || n==1)
    {
        return 0;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int num=100;
    int count=0;
    for(int i=1;i<num;i++)
    {
        if(isPrime(i))
        {
            count++;
            cout<<i<<endl;

        }
    }
    cout<<"Total prime Number are:"<<count;
}