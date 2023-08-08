#include <bits/stdc++.h>
using namespace std;
void MaxNumberofBalloon(string s)
{

    unordered_map<char, int> m;
    int flag = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'b')
        {
            m[s[i]]++;
        }
        else if (s[i] == 'a')
        {
            m[s[i]]++;
        }
        else if (s[i] == 'l')
        {
            m[s[i]]++;
        }
        else if (s[i] == 'l')
        {
            m[s[i]]++;
        }
        else if (s[i] == 'o')
        {
            m[s[i]]++;
        }
        else if (s[i] == 'o')
        {
            m[s[i]]++;
        }
        else if (s[i] == 'n')
        {
            m[s[i]]++;
        }
    }

    if (m.find('b') == m.end() || m.find('a') == m.end() || m.find('l') == m.end() || m.find('o') == m.end() || m.find('n') == m.end())
        return ;
    m['o'] = m['o'] / 2;
    m['l'] = m['l'] / 2;
    int ans = INT_MAX;
    for (auto it : m)
    {

        ans = min(ans, it.second);
    }
    cout << ans;
}

int main()
{
    string s = "loonbalxballpoon";

    MaxNumberofBalloon(s);
}