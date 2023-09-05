#include <bits/stdc++.h>
using namespace std;
// To find the number of Unique paths from which start to end
// obstacle is also there ..if obstacle then no path execute from that
// 1 denote the obstacle

// Memoziation method



// Tabulation Method
int main()
{
    vector<vector<int>> obstacleGrid = {{0, 0, 0}, {0, 1, 0}, {0, 0, 0}};

    int n = obstacleGrid.size();
    int m = obstacleGrid[0].size();
    int dp[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (obstacleGrid[i][j] == 1)
            {
                dp[i][j] = 0;
            }
            else if (i == 0 && j == 0)
            {
                dp[i][j] = 1;
            }
            else
            {
                int up = 0, left = 0;
                if (i > 0)
                {
                    up = dp[i - 1][j];
                }
                if (j > 0)
                {
                    left = dp[i][j - 1];
                }
                dp[i][j] = up + left;
            }
        }
    }
    // return dp[n-1][m-1]
    cout << dp[n - 1][m - 1];
}
