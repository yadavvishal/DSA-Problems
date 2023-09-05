#include <bits/stdc++.h>
using namespace std;
// To check if string str1 is rotated by 2 of str2 in any direction ..clock or anti clock


bool solve(string str1, string str2)
{
    for (int i = 0; i < str2.length(); i++)
    {
        if (str1.find(str2[i]) == string::npos)
        {
            return false;
        }
    }
    int n = str1.length();
    int m = str2.length();
    if (n == 1 && m == 1)
    {
        if (str1 == str2)
        {
            return true;
        }
    }
    if (n != m)
    {
        return false;
    }

    if (str1[0] == str2[m - 2] && str1[1] == str2[m - 1] || str1[n - 2] == str2[0] && str1[n - 1] == str2[1])
    {
        return true;
    }
    return false;
}
int main()
{
    string str1 = "amazon";
    string str2 = "azonam";
    bool ans=solve(str1, str2);
    cout<<ans;
}