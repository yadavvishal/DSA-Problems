#include<bits/stdc++.h>
using namespace std;
// Time Complexity O(N!)
// use inbuilt stl function of string

void findPermutation(string ans)
{
    sort(ans.begin(),ans.end());
    do{
        cout<<ans<<" ";

    }
    while(next_permutation(ans.begin(),ans.end()));
}
int main()
{
    string ans="ABC";
    findPermutation(ans);
    return 0;

}