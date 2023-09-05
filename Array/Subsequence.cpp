#include <bits/stdc++.h>
using namespace std;
// To find the subsequence of Array

// Time Complexicty of O(2^n)
// Space Complexity of O(n)

void solve(int index, vector<int> &v, int arr[], int n)
{
    if (index == n)

    {
        for (auto it : v)
        {
            cout << it <<" ";
        }
        if (v.size() == 0)
        {
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    // not pick or not take condition, this element is not added to your subsequence

    solve(index + 1, v, arr, n);

    // take or pick the particular index into the subsequence
    v.push_back(arr[index]);
    solve(index + 1, v, arr, n);
    v.pop_back();
}
int main()
{
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> v;
    solve(0, v, arr, n);

    return 0;
}