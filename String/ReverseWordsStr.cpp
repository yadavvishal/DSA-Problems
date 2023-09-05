#include <bits/stdc++.h>
using namespace std; 
// This solution is good but not passes all cases if the string contain __ before or after of string
// Time Complexity of  O(N^2)


string reverseWords(string s)
{
    stack<string> st;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        string word = "";
        while (s[i] != ' ' && i < n)
        {
            word += s[i];
            i++;
        }
        st.push(word);
    }
    string newstring = "";
    while (!st.empty())
    {
        newstring += st.top() + ' ';
        st.pop();
    }
    string ans = "";
    for (int i = 0; i < newstring.length() - 1; i++)
    {
        ans += newstring[i];
    }
    return ans;
}
int main()
{
    string s = "the sky is blue";
    string res = reverseWords(s);
    cout << res;
}