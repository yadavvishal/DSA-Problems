#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str= "Australia";
    char ch='a';
    int n=str.length();
    str.erase(remove(str.begin(),str.end(),ch),str.end());
    cout<<str;
}
