// Brute force approach
// Time complexity of O(N^3)
// pahle substring find karenge uske check karenge wo palindrome hai ya nhi or uski lenghth store karnege

#include<bits/stdc++.h>
using namespace std;
int LongestPalindrome(string s)
{
    
    int n=s.length();
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        string str="";
        for(int j=i;j<n;j++)
        {
            str+=s[j];
            string str2=str;
            
            reverse(str2.begin(),str2.end());
            if(str2==str)
            {
                
                ans=max(ans,j-i+1);
            }
        }
    }
    return ans;
}
int main()
{
    string s= "aaaabbaa";
    int result=LongestPalindrome(s);
    cout<<result;

}