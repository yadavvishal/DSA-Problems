#include <bits/stdc++.h>
using namespace std;
// Find  destination city, that is, the city without any path outgoing to another city.

int main()
{
    vector<vector<string>> paths = {{"London", "New York"}, {"New York", "Lima"}, {"Lima", "Sao Paulo"}};
    unordered_set<string> st;
    for (int i = 0; i < paths.size(); i++)
    {
        st.insert(paths[i][0]);
    }
    string ans = "";
    for (int i = 0; i < paths.size(); i++)
    {
        for (int j = 0; j < paths[0].size(); j++)
        {
            if (st.find(paths[i][j]) == st.end())
            {
                ans += paths[i][j];
                break;
            }
        }
    }
    cout << ans;

}