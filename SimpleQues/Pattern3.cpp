#include<bits/stdc++.h>
using namespace std;
// Program to print the star problem

/*
    ******
    *****
    ****
    ***
    **
    *
*/
int main()
{
    int n=5;
    for(int i=n;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}