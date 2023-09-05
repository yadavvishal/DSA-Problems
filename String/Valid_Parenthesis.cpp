#include<bits/stdc++.h>
using namespace std;
// To check the string contain valid parenthses or not

int main()

{
    string s="()[]{}";
    stack<char>st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==')' && st.top()=='(' || s[i]==']' && st.top()=='[' || s[i]=='}' && st.top()=='{')
        {
            st.pop();
        }
        else{
            st.push(s[i]);
        }
    }
    if(st.size()==0)
    {
        cout<<"Valid Parenthesis";
    }
    else{
        cout<<"Invalid Parenthesis";
    }

}