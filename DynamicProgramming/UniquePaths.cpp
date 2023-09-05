#include <bits/stdc++.h>
using namespace std;
// To find the number of unique paths from start to end
// and two direction move only down,right

// Memoziation Method

int solve(int m, int n, vector<vector<int>> &dp)
{
    if (m == 0 && n == 0)
    {
        return 1;
    }
    if (m < 0 || n < 0)
    {
        return 0;
    }
    if (dp[m][n] != -1)
    {
        return dp[m][n];
    }
    return dp[m][n] = solve(m - 1, n, dp) + solve(m, n - 1, dp);
}
int main()
{
    int m = 3;

    int n = 7;
    vector<vector<int>> dp(m, vector<int>(n, -1));
    cout << solve(m - 1, n - 1, dp);
}

// Tabulation Method
/*
int main()
{
    int n = 3;
    int m = 7;

    int dp[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 && j == 0)
            {
                dp[i][j] = 1;
            }

            else
            {
                int down = 0;
                int right = 0;
                if (i > 0)
                {
                    down = dp[i - 1][j];
                }
                if (j > 0)
                {
                    right = dp[i][j - 1];
                }
                dp[i][j] = down+ right;
            }
        }
    }
    // return dp[n-1][m-1];
    cout << dp[n - 1][m - 1];
}
*/
