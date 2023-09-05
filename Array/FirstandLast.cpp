#include <bits/stdc++.h>
using namespace std;
// To find the index of first and Last occurence of given element
// Time COmplexity of O(N)

int main()
{
    int arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    int n = 9; // arr length
    int x = 5;
    // given

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            v.push_back(i);
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == x)
        {
            v.push_back(i);
            break;
        }
    }
    if (v.size() != 2)
    {
        v.push_back(-1);
        v.push_back(-1);
    }
    for(auto x:v)
    {
        cout<<x<<" ";
    }
}