#include<bits/stdc++.h>
using namespace std;
// To obtain the max profit from stock by buying and selling stock
// Time Complexity o(N)
 
int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int ans=0;
        int mini=prices[0];
        int sell=0;
        for(int i=1;i<n;i++)
        {
            mini=min(mini,prices[i]);
            sell=prices[i]-mini;
            ans=max(ans,sell);

        }
        return ans;
}
int main()
{
    vector<int> v={7,1,5,3,6,4};
    int res=maxProfit(v);
    cout<<res;
    return 0;

}