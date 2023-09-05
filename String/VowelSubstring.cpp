#include <bits/stdc++.h>
using namespace std;
// To count the number of substring which contains all 5 vowels

bool checkVowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        return true;
    }
    return false;
}
int main()
{
    string word = "cuaieuouac";
    int ans = 0;
    unordered_set<int> st;
    for (int i = 0; i < word.length(); i++)
    {

        for (int j = i; j < word.length(); j++)
        {
            if (checkVowel(word[j]))
            {
                st.insert(word[j]);
                if (st.size() == 5)
                {
                    ans++;
                }
            }
            else
            {
                break;
            }
        }
        st.clear();
    }
    cout<<ans;
}