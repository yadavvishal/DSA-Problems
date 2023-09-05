#include <bits/stdc++.h>
using namespace std;
// TO find the minimum Distance between the two words which is present in s;

int DistanceTwoWords(string s[],int n,string word1,string word2)
{
    int d1=-1;
    int d2=-1;
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(s[i]==word1)
        {
            d1=i;
        }
        if(s[i]==word2)
        {
            d2=i;
        }
        if(d1!=-1 && d2!=-1)
        {
            return min(ans,abs(d1-d2));
        }
    }
    return -1;
}
int main()
{
    string s[] = { "the", "quick", "brown", "fox", "quick" };

    string word1 = "the", word2 = "fox";

    int n=sizeof(s)/sizeof(s[0]);
    int result=DistanceTwoWords(s,n,word1,word2);
    cout<<result;
}