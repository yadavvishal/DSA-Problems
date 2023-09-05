#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="2121123";
    int count=0;
    for(char ch:str)
    {
        if(!(ch>=48 && ch<=57))
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