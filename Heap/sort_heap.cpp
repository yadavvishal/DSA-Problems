#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={19,29,40,15,17};

    // first make the heap
    
    make_heap(v.begin(),v.end());
    sort_heap(v.begin(),v.end());
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    return 0;
    
}