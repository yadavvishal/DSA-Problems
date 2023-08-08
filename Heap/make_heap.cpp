#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={12,15,13,18,40};
    make_heap(v.begin(),v.end());
   
    cout<<v.front()<<" ";

    return 0;
}