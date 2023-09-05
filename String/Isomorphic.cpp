#include <bits/stdc++.h>
using namespace std;
// To check the two string are Isomorphic to each other or not

bool checkIsomorphic(string str1, string str2)
{
    // Your code here
    int n = str1.length();
    int m = str2.length();
    if (n != m)
    {
        return false;
    }
    unordered_map<char, char> mp1;
    unordered_map<char, char> mp2;
    for (int i = 0; i < n; i++)
    {
        if (!mp1[str1[i]] && !mp2[str2[i]])
        {
            // store the hash of each other in map

            mp1[str1[i]] = str2[i];
            mp2[str2[i]] = str1[i];
        }
        // str2 hash is not present in map1 then return false

        else if (mp1[str1[i]]!= str2[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s1 = "aabbc";
    string s2 = "xyxyz";
    bool ans = checkIsomorphic(s1, s2);
    cout << ans;
}