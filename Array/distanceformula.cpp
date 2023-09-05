#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1=9;
    int x2=4;
    int y1=3;
    int  y2=8;
    int dx=x2-x1;
    int dy=y2-y1;
    int ans1=dx*dx;
    int ans2=dy*dy;
    int res=ans1+ans2;
    cout<<sqrt(res);
}