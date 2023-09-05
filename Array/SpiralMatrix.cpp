#include <bits/stdc++.h>
using namespace std;

// To print the spiral matrix 
int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = matrix.size();
    int col = matrix[0].size();

    int top = 0;
    int left = 0;
    int right = col - 1;
    int bottom = row - 1;
    vector<int> ans;

    while (left <= right && top <= bottom)
    {
        for (int i = left; i <= right; i++)
        {
            ans.push_back(matrix[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(matrix[i][right]);
        }
        right--;
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if(left<=right)
        {
            for(int i=bottom;i>=top;i--)
            {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    // return ans
    for(int i=0;i<ans.size();i++)
    {
       cout<<ans[i]<<" ";
    }
}