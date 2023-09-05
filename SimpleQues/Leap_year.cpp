#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num=2023;


    if((num%100!=0) && (num%4==0)|| (num%400==0))
    {
        cout<<"Leap year";
    }
    else{
        cout<<"Not leap year";
    }
    
}