#include<bits/stdc++.h>
using namespace std;
// To make the string alternate character uppercase and lowercase

int main()
{
    string str="geeksforgeeks";
    for(int i=0;i<str.length();i++)
    {
        if(islower(str[0])){
            if(i%2==0)
            {
                str[i]=tolower(str[i]);
            }
            else{
                str[i]=toupper(str[i]);
            }
        }
        else{
            if(i%2==0)
            {
                str[i]=toupper(str[i]);
            }
            else{
                str[i]=tolower(str[i]);
            }
        }
    }
    cout<<str;
}