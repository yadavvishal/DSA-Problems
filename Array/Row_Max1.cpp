#include <bits/stdc++.h>
using namespace std;
// Find the row with maximum number of 1s

// Time Complexity of O(N*N)


int main()
{
    int arr[4][4] = {{0, 0, 0, 1},
                 {0, 1, 1, 1},
                 {1, 1, 1, 1},
                 {0, 0, 0, 0}};

    int n = sizeof(arr) / sizeof(int);
    int count = 0;

    int ans = INT_MIN;
    int result;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
        if (ans < count)
        {
            ans = count;
            result = i;
        }
    }

    cout << result;
}