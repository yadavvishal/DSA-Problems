#include<bits/stdc++.h>
using namespace std;

// Revserse String whithout using reverse function

int main()
{
    string str="mynameisVishal";

    cout<<str<<endl;
    int n=str.length();
    int i=0;
    int j=n-1;
    while(i<j)
    {
        swap(str[i],str[j]);
        i++;
        j--;
    }
    cout<<str;
}