#include<bits/stdc++.h>
using namespace std;
//Time Complexity of O(logn)

void decimaltoBinary(int num)
{
    int ans[32];
    int i=0;
    while(num>0)
    {
        ans[i]=num%2;
        num=num/2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<ans[j]<<" ";
    }

}
int main()
{
    int num=17;
    decimaltoBinary(num);
    return 0;
}