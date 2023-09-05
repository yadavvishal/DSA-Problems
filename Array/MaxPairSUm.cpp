#include <bits/stdc++.h>
using namespace std;
// Max Pair Sum includes the pair contains the digit which is same

int main()
{
    vector<int> nums = {51, 71, 17, 24, 42};
    int sum = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {

            string a = to_string(nums[i]);
            sort(a.begin(), a.end());
            string b = to_string(nums[j]);
            sort(b.begin(), b.end());

            if (a[a.size() - 1] == b[b.size() - 1])
            {

                int ans = nums[i] + nums[j];

                sum = max(sum, ans);
            }
        }
    }
    if (sum == INT_MIN)
    {
        return -1;
    }
    cout<<sum;
}