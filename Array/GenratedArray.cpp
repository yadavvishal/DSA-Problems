#include <bits/stdc++.h>
using namespace std;
// find the maximum in Generated Array

int main()
{
    int n = 7;
    // given

    // solution
    vector<int> nums(n + 1);
    if (n == 0)
    {
        return 0;
    }
    int ans = 1;
    nums[0] = 1;
    nums[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            nums[i] = nums[i / 2];
        }
        else
        {
            nums[i] = nums[i / 2] + nums[i / 2 + 1];
        }
        ans = max(ans, nums[i]);
    }
    cout<<ans;
}
