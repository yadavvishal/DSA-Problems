#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={29,19,10,15,16,17};
    for(auto x:v)
    {
        cout<< x<<" ";
    }    
    cout<<endl;
    make_heap(v.begin(),v.end());
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    v.push_back(88);
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    push_heap(v.begin(),v.end());
    for(auto x:v)
    {
        cout<<x<<" ";
    }


    
}