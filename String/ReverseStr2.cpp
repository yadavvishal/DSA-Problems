#include<bits/stdc++.h>
using namespace std;
// Time Complexity of O(N)
// Space Complexity of O(N)
// Reverse string without using swap inbuilt function
void swapStr(string &str,int i,int j)
{
    char temp=str[i];
    str[i]=str[j];
    str[j]=temp;
}
int main()
{
    string str="mynameisVishal";
    cout<<str<<endl;
    int n=str.length();
    int i=0;
    int j=n-1;
    while(i<j)
    {
        swapStr(str,i,j);
        i++;
        j--;
    }
    cout<<str;
}