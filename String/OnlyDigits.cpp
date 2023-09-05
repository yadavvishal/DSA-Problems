#include<bits/stdc++.h>
using namespace std;
// To check the string contain only digits or not
// Using inBuilt isdigit function to check it

int main()
{
    string str="124.7";
    int n=str.length();

    int  count=0;
    for(int i=0;i<n;i++)
    {
        if(!isdigit(str[i]))
        {
            cout<<"false";
            count++;
            break;
        }
    }
    if(count==0)
    {
        cout<<"true";
    }
    

}