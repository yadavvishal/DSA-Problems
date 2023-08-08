#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={24,22,42,53,23,51};
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    make_heap(v.begin(),v.end());
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    // pop_heap is used to move the largest element in end
    
    pop_heap(v.begin(),v.end());
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;




}